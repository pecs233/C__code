//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//float Add(float a, float b)
//{
//	return a + b;
//}
//float Sub(float a, float b)
//{
//	return a - b;
//}
//float Mul(float a, float b)
//{
//	return a * b;
//}
//float Div(float a, float b)
//{
//	return a*1.0 / b;
//}
//
//
//void Menu()
//{
//	printf("******************************\n");
//	printf("**    1. add     2.sub      **\n");
//	printf("**    3. mul     4.div      **\n");
//	printf("**        0. exit           **\n");
//	printf("******************************\n");
//}
//
//
//void Ari(float(*p)(float,float))
//{
//	float a, b,ret;
//	printf("请输入两个数: ");
//	scanf("%f %f", &a, &b);
//	ret = p(a, b);
//	printf("结果为: %f\n",ret);
//}
//
//
//int main()
//{
//	int input;
//	while (1)
//	{
//		Sleep(500);
//		Menu();
//		printf("请选择: ");
//		scanf("%d", &input);
//		float (*arr[5])(float, float) = { 0,Add,Sub,Mul,Div };
//		if (arr[input] == 0)
//		{
//			printf("退出程序");
//			break;
//		}
//		else if (input > 0 && input < 5)
//		{
//			Ari(arr[input]);
//		}
//		else
//		{
//			printf("选择错误,请重新选择");
//		}
//	}
//	return 0;
//}