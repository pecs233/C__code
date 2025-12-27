#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 //小练习
int main()
{
	/*int n;
	printf("input data:\n");
	scanf("%d", &n);
	if ( || n > 9999)
	{
		printf("wrong data!");
		return 1;
	}
	int a, b, c, d;
	a = n % 10;
	b = (n / 10 ) % 10;
	c = (n / 10 /10) % 10;
	d = n / 10 / 10 / 10;
	printf("%d%d%d%d", a, b, c, d);
	return 0;*/




	/*int n;
	float w;
	printf("请输入购买的数量:\n");
	scanf("%d", &n);
	if (n >= 50)
	{
		w = n * 65 * 0.6;
	}
	else if (30 <= n && n < 50)
	{
		w = n * 65 * 0.8;
	}
	else if (20 <= n && n < 30)
	{
		w = n * 65 * 0.85;
	}
	else if (10 <= n && n < 20)
	{
		w = n * 65 * 0.9;
	}
	else if (0 < n && n < 10)
	{
		w = n * 65;
	}
	else
	{
		printf("错误!");
		return 1;
	}
	printf("总价:%.2f", w);
	return 0;*/




	/*int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);*/



	/*int n;
	printf("输入整数N:\n");
	scanf("%d",&n);
	int sum = 0;
	int i;
	for (i = 0; i <= n; i++);
	{
		sum += i;
	}
	printf("累加后的结果:%d", sum);
	return 0;*/

	int arr[3];
	int i;
	printf("请输入三个数，用逗号隔开:");
	scanf("%d,%d,%d", &arr[0],&arr[1],&arr[2]);
	int max=arr[0];	
	int min = arr[0];
	for (i = 0; i < 3; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	printf("最大数是:%d\n", max);
	printf("最小数是:%d\n", min);
	return 0;
}