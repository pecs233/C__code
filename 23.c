#include <stdio.h>
//枚举和联合体初识
enum Day
{
	Mon,
	Tus,
	Wes,
	Thu,
	Fri,
	Str,
	Sun,
};
union U1
{
	int a;
	char x;
};
union U2
{
	int a;
	char arr[5];
};
int main()
{
	enum Day x = Mon;
	printf("%zu\n", sizeof(union U1));
	printf("%zu\n", sizeof(union U2));
	return 0;
}