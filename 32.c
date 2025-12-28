#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "string.h"
 //小练习
 
void reverse(char* p)
{
	int len = strlen(p);
	char* l=p;
	char* r=p+len-1;
	while (r - l > 0)
	{
		char tmp;
		tmp = *l;
		*l = *r;
		*r = tmp;
		l++;
		r--;
	}
}
int main()
{
	/*int a, b;
	printf("请输入两个整数:\n");
	scanf("%d,%d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("交换后的结果:%d,%d", a, b);*/



	//float c, f;
	//printf("请输入摄氏温度\n");
	//scanf("%f", &c);
	//f = c * 9 / 5 + 32;
	//printf("转换后的华氏温度为：%4.2f", f);


	/*int m, s;
    int x = 285;
	m = x / 60;
	s = x % 60;
	printf("minutes is: %d and second is %d", m, s);*/



		char str[] = "ILoveChina, ILoveBJTU, ILoveCXSJ";
		printf("The given string %s has %d characters.\n", str, strlen(str));
		reverse(str);
		printf("Reversed string is %s\n", str);
	return 0;
}