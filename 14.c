#include <stdio.h>
#include "string.h"
#include "assert.h"
char* My_strstr(char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* p2 = str2;
	while (*str1)
	{
		if (*(str1) == *(str2))
		{
			char* p1 = str1;
			while (*str1 && *str2 && *(str1) == *(str2))
			{
				str1++;
				str2++;
			}
			if (*(str2) == '\0')
			{
				return (char*)p2;
			}
			else
			{
				str2 = p2;
				str1 = p1;
			}
		}
		str1++;
	}
	return NULL;
}
int main()
	{
	char arr1[20] = {"I am DZY"};
	char arr2[] = {"DZY"};
	char *p=My_strstr(arr1, arr2);
	printf("%s\n", p);
	}