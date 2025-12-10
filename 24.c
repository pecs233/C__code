#include <stdio.h>
#include "stdlib.h"
//动态内存管理初识
int main()
{
	int* p;
	p = (int*)malloc(40);//malloc函数的使用
	if (p == NULL)//判断返回值是否为空指针
	{
		printf("error");
		return 1;
	}
	int i;
	for (i = 0;i < 10;i++)
	{
		p[i] = i;//不要改变p所指向的地址以防止释放时程序崩溃！！
	}
	free(p);//释放该内存
	p = NULL;//防止p为野指针


	p = (int*)calloc(10, 4);//calloc函数的使用，其会初始化其开辟的内存
	if (p == NULL)
	{
		printf("error");
		return 1;
	}
	//..........
	free(p);
	p = NULL;

	int* ptr = (int)realloc(p, 40);//realloc函数的使用，改变内存大小
	if (ptr == NULL)
	{
		printf("error");
		return 1;
	}
	p = ptr;//将p指向改变后的内存的初始位置
	ptr = NULL;//相当于销毁ptr（临时）指针
	//..........
	free(p);
	p = NULL;
	return 0;
}
