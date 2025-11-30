#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//strtokº¯Êý³õÌ½¾¿
int main()
{
	char arr[30] = { "I am DZY" };
	char sep[] = { ' ' };
	char* ret;
	for (ret = strtok(arr, sep);ret != NULL;ret = strtok(NULL, sep))
		printf("%s\n", ret);
	return 0;
}