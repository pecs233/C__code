#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "assert.h"
int My_strlen(const char* p)
{
	assert(p);
	int len = 1;
	while (*p++)
		len++;
	return len;
}
int main()
{
	int a = 0;
	char arr[] = { "zxcvbnm" };
	int len = My_strlen(arr);
	printf("%d\n", len);
	return 0;
}