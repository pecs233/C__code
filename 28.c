#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//Ð¡Á·Ï°

//void sortn(int* p, int n)
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (p[j] > p[j + 1])
//			{
//				int temp;
//				temp = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = temp;
//			}
//		}
//	}
//}
//int Max(int* p, int n)
//{
//	int max = p[0];
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		if (max < p[i])
//			max = p[i];
//	}
//	return max;
//}
void sum_diff(float op1,float op2,float *psum,float *pdiff)
{
	*psum = op1 + op2;
	*pdiff = op1 - op2;
}
int main()
{
	/*int n;
	scanf("%d", &n);
	int arr[10];
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	sortn(arr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}*/
	/*int n;
	scanf("%d", &n);
	int arr[10];
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
int max=Max(arr, n);
printf("The largest value is %d",max);*/
	int x, y;
	float sum, diff;
	scanf("%d %d", &x, &y);
	sum_diff(x, y, &sum, &diff);
	printf("the sum is %f\n", sum);
	printf("the diff is %f\n", diff);
}