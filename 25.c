#include <stdio.h>
#include "stdlib.h"
//柔性数组的使用（配合动态内存管理函数）
struct sort
{
	int a;
	int arr[];
};
int main()
{
	struct sort* p=(struct sort*)malloc(sizeof(struct sort) + 4 * 10);
	if (p == NULL)
	{
		return 1;
	}
	int i;
	for (i = 0;i < 10; i++)
	{
		p->arr[i] = i;
	}
	for (i = 0;i < 10; i++)
	{
		printf("%d ",p->arr[i]);
	}
	free(p);
	p = NULL;
	return 0;
}