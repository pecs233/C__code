#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
void My_reverse(char* parr)
{
	int right;
	int left;
	char temp;
	for (right = 0;*(parr + right)!='\0';right++);
	for (left = 0;left < right;)
	{
		temp = *(parr + left);
		*(parr + left) = *(parr + right -1);
		*(parr + right - 1) = temp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100];
	gets(arr);
	My_reverse(arr);
	printf("%s", arr);
	return 0;
}