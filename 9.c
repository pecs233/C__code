#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Sep(int arr[], int length)
{
	int i, j;
	i = 0;
	j = length;
	for (;i < j;i++)
	{
		if (arr[i] % 2 == 0)
		{
			for (; i < j; j--)
			{
				if (arr[j] % 2 == 1)
				{
		        int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
					break;
				}
			}
		}
	}
}
int main()
{
	int arr[10];
	int i;
	int length = sizeof(arr) / sizeof(arr[0]);
	for(i=0;i<length;i++)
	{
		scanf("%d", &arr[i]);
	}
	Sep(arr, length);
	for (i = 0;i < length;i++)
	{
		printf("%.d  ", arr[i]);
	}
	return 0;
}