#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//Ð¡Á·Ï° 

//void maxmin(int* p)
//{
//	int min = p[0];
//	int max = p[0];
//	int i;
//	for (i = 9;i >=0 ;i--)
//	{
//		if (min > p[i])
//		{
//			min = p[i];
//			int temp;
//		    temp=p[0];
//			p[0] = p[i];
//			 p[i]=temp;
//		}
//		if (max < p[i])
//			max = p[i];
//	}
//	p[0] = min;
//	p[9] = max;
//}
//void  reverse(char* string, int length)
//{
//	int left, right;
//	left = 0;
//	right = length - 1;
//	while (left < right)
//	{
//		char temp;
//		temp = string[left];
//		string[left] = string[right];
//		string[right] = temp;
//		left++;
//		right--;
//	}
//
//}
int search(int* p, int n,int x)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (p[i] == x)
			return i;
	}
	return -1;
}
int main()
{
	//int a[10];
	//int i;
	//for (i = 0;i < 10;i++)
	//{
	//	scanf("%d", &a[i]);
	//}
	//maxmin(a);
	//for (i = 0;i < 10;i++)
	//{
	//	printf("%d ", a[i]);
	//}
	//printf("\n");
	/*char string[100];
	int length = 0;
	printf("Input a string:\n");
	gets(string);
	length = strlen(string);
	reverse(string, length);
	printf("The reverse is:\n%s", string);
	return 0;*/
		int n;
		scanf("%d", &n);
		int a[10];
		int i;
		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		int x;
		scanf("%d", &x);
		int y=search(a,n,x);
		if (y != -1)
		{
			printf("%d", y);

		}
		else
			printf("no found");
		return 0;
}