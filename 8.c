#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}
int main()
{
	int sum=0;
	int i;
	for (i = 0;i <= 10;i++)
	{
		sum += factorial(i);
	}
	printf("%d", sum);
	return 0;
}