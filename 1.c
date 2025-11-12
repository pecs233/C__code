#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "assert.h"
char* My_strpy(char* p1, const char* p2)
{
	char* ret = p1;
	assert((p1 != NULL) || (p2 != NULL));
	while (*p1++ = *p2++);
	return ret;
}
int main()
{
	char arr1[] = { "********" };
	char arr2[] = { "i am dzy" };
	printf("%s\n", My_strpy(arr1, arr2));
	return 0;
}