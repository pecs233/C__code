//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void Bubble(int arr[10], int length)
//{
//	int i, j;
//	for (i = 0;i < length;i++)
//	{
//		for (j = 0;j < length - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void Half_find(int arr[], int length,int x)
//{
//	int left = 0;
//	int right = length - 1;
//	while (left != right-1)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == x)
//		{
//			printf("找到了，下标为%d", mid);
//			break;
//		}
//		else if (arr[mid]<x)
//		{
//			left=mid;
//		}
//		else if (arr[mid] > x)
//		{
//			right=mid;
//		}
//	}
//	if (left==right-1)
//	{
//		printf("没找到");
//	}
//}
//int main()
//{
//	int arr[10];
//	int i;
//	int length = sizeof(arr)/sizeof(arr[0]);
//	for (i = 0;i < length;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	Bubble(arr, length);
//	for (i = 0;i < length;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int x;
//	int length1 = sizeof(arr1) / sizeof(arr1[0]);
//	scanf("%d", &x);
//	Half_find(arr1, length1,x);
//	return 0;
//}