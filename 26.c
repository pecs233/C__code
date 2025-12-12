#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "stdlib.h"
//Ð¡Á·Ï°

//int SwapFive(int* p)
//{
//	int i;
//	for (i = 0;i < 5;i++)
//	{
//		int temp;
//		temp = p[0];
//		int j;
//		for (j = 0;j < 9;j++)
//		{
//			p[j] = p[j + 1];
//		}
//		p[9] = temp;
//	}
//}
char* search(char* array, char* array_search, char* array_replace)
{
	char* p=malloc(100);
	if (p == NULL)
	{
		return 1;
	}
	int len1 = strlen(array_search);
	int len2 = strlen(array_replace);
	int i;
	int j = 0;
	for (i = 0;i < 100;)
	{
		if (strncmp(array + i, array_search, len1) == 0)
		{
			int x;
			for (x = 0;x < len2;x++) 
			{
				*(p + j + x) = *(array_replace + x);
			}
			i += len1;
			j += len2;
		}
		else
		{
			p[j] = array[i];
			i++;
			j++;
		}
	}
	return p;
}
int main()
{
	/*int a[10];
	int i;
	for (i = 0;i < 10;i++)
	scanf("%d", &a[i]);
	SwapFive(a);
	for (i = 0;i < 10;i++)
	printf("%d ", a[i]);*/
	char array[100], array_search[20], array_replace[20];
	gets(array);
	gets(array_search);
	gets(array_replace);
	char* new_array= search(array, array_search, array_replace);
	puts(new_array);
	free(new_array);
	new_array = NULL;
	return 0;
}