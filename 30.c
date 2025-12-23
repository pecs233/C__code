//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////快速排序函数的实现
//
//
////快速排序函数
//void Quick_sort(int* p, int len)
//{
//	//相关变量的创建
//	int sert = p[0];//设置标准
//	int s[10] = { 0 };//创建比标准小的数组
//	int b[10] = { 0 };//创建比标准打的数组
//	int* ps = s;
//	int* pb = b;
//	int small = 0;
//	int big = 0;
//	int i;
//
//	//算法
//	for (i = 1; i < len; i++)
//	{
//		if (sert >= p[i])
//		{
//			*ps = p[i];
//			ps++;
//			small++;
//		}
//		else if (sert < p[i])
//		{
//			*pb = p[i];
//			pb++;
//			big++;
//		}
//	}
//
//	//修改原数组
//	ps = s;
//	pb = b;
//	for (i = 0; i < small; i++)
//	{
//		p[i] = ps[i];
//	}
//	p[i] = sert;
//	for (i = 0; i < big; i++)
//	{
//		p[i + small + 1] = pb[i];
//	}
//
//	//递归
//	if (small > 1)
//	{
//		Quick_sort(p, small);
//	}
//	if (big > 1)
//	{
//		Quick_sort(p+small+1, big);
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i;
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Quick_sort(arr,len);
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}