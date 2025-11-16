#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void  Creat_Matrix(int order, int arr[order][order])
{
	int i, j;
	for (i = 0;i < order;i++)
	{		for (j = 0;j < order;j++)
			scanf("%d", &arr[i][j]);
		getchar();
	}
}
int Det_Matrix(int order, int arr[order][order])
{
	if (order == 2)
		return arr[0][0] * arr[1][1] - arr[1][0] * arr[0][1];
	else if (order > 2)
	{
		int j, sum,pn;
		sum = 0;
		pn = 1;
		for (j = 0;j < order;j++)
		{
			int x, y, m, n;
			y = 0;	
			int tem_arr[order-1][order-1];
			for (n=0;n < order;n++)
			{
				if (n != j)
				{
					m = 1;
					for (x=0;x < order - 1;x++)
					{
						tem_arr[x][y] = arr[m][n];
						m++;
					}
					y++;
				}
			}
			sum += arr[0][j] * pn * Det_Matrix(order - 1 , tem_arr);
			pn = -pn;
		}
		return sum;
	}
}
int main()
{
	int n;
	printf("ÊäÈë¾ØÕóµÄ½×Êýn\n");
	scanf("%d", &n);
	int arr[n][n];
	printf("ÊäÈëÄãµÄ¾ØÕó\n");
	Creat_Matrix(n , arr);
	int rank=Det_Matrix(n , arr);
	printf("%d", rank);
	return 0;
}