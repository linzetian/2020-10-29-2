//创建一个整形数组，完成对数组的操作
//1、实现对init（）函数的初始化数组全为0
//2、实现print（）打印每一个元素
//3、实现resver（）对数组元素的逆置

#include<stdio.h>

void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void resver(int arr[], int sz)
{
	int i = 0;
	int left = 0;
	int right = sz - 1;

	while (left<right)
	{
		int temp = 0;
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//init(arr,sz);//初始化为0
	print(arr,sz);
	resver(arr,sz);
	print(arr, sz);
	return 0;
}