#include <stdio.h>
#include "string.h"
#include "assert.h"
void* My_memset(void* ptr, int val, size_t num)
{
	assert(ptr);
	while (num--)
	{
		*((char*)ptr) = val;
		ptr = (char*)ptr + 1;
	}
}
int main()
{
	char arr[] = {"Hello Word!"};
	int i;
	for (i = 0;i < 11;i++)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
	My_memset(arr, '*', 11);
	for (i = 0;i < 11;i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}