#include <stdio.h>
#include <stddef.h>
//结构体相关
struct str1
{
	int n;
	char c;
	char str[11];
};
void print(struct str1* p)
{
	printf("%d\n%c\n", p->n, p->c);
	int i;
	for (i = 0;i < 5;i++)
	{
		printf("%c", p->str[i]);
	}
}
struct str2
{
	int n;
	struct str1 s;
	struct str2* p;
};//结构体自引用
int main()
{
	struct str1 s1 = { 5,'a',"zxcvb" };
	printf("%d\n%c\n", s1.n, s1.c);
	int i;
	for (i = 0;i < 5;i++)
	{
		printf("%c", s1.str[i]);
	}
	printf("\n");
	print(&s1);
	printf("\n****************************\n");
	printf("%zu\n", offsetof(struct str1, n));
	printf("%zu\n", offsetof(struct str1, c));
	printf("%zu\n", offsetof(struct str1, str));
	printf("%zu\n", offsetof(struct str1, str[7]));
	printf("%zu\n", sizeof(struct str1));
	printf("%zu\n", sizeof(struct str2));
	return 0;
}