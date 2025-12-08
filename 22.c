#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "math.h"
//²éÕÒÂÏÉúÊı
int SumFac(int x)
{
	int i;
	int sum = -x;
	for (i = 1;i < sqrt(x);i++)
	{
		if ((x / i) * i == x)
		{
			sum += i + (x / i);
		}
	}
	i = sqrt(x);
	if ((x / i) * i == x)
	{
		sum += i;
	}
	return sum;
}
int main()

{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int i;
	int j;
	int if_found = 0;
	for (i = m;i < n;i++)
	{
		for (j = i + 1;j < n;j++)
		{
			if (SumFac(i) == j && SumFac(j) == i)
			{
				printf("%d %d \n", i, j);
				if_found = 1;
			}
		}
	}
	if (!if_found)
	{
		printf("NONE");
	}
	return 0;
}