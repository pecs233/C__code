#include <stdio.h>
int main()
{
	int arr[10][10] = {0};
	int i, j;
	for (i = 0;i < 10;i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
		for (j = 1;j <i;j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	int x, y;
	for (x = 0;x < 10;x++)
	{
		for (y = 0;y <= x;y++)
		{
			printf("%-2d", arr[x][y]);
			if (arr[x][y] > 9)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}