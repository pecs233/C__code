#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "string.h"
//Ð¡Á·Ï°2
//void delchar(char* p1,char* p2,char a)
//{
//	while (*p1)
//	{
//		if (*(p1) != a)
//		{
//			*(p2) = *(p1);
//			p2++;
//		}
//		p1++;
//	}
//	*(p2) = '\0';
//}

void splitfloat(float x, int* intpart, float* fracpart)
{
	int i=0;
	if (x >= 0)
	{
		while (x >= 1)
		{
			x--;
			i++;
		}
		*(intpart) = i;
		*(fracpart) = x;
		return NULL;
	}
	else
	{
		x = -x;
		while (x >= 1)
		{
			x--;
			i++;
		}
		x = -x;
		i = -i;
		*(intpart) = i;
		*(fracpart) = x;
		return NULL;
	}
}
int main()
{
	/*char arr1[100];
	gets(arr1);
	char a;
	scanf("%c", &a);
	char arr2[100];
	delchar(arr1,arr2,a);
	puts(arr2);*/
	float x;
	printf("Enter x: ");
	scanf("%f", &x);
	int intpart;
	float fracpart;
	splitfloat(x, &intpart, &fracpart);
	printf("The intpart is %d\n", intpart);
	printf("The fracpart is%f\n", fracpart);
	return 0;
}