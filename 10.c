//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int Number(char arr[100], char key)
//{
//    int temp=0;
//    int i;
//    for (i = 0;i < 100;i++)
//    {
//        if (arr[i] == key)
//            temp++;
//    }
//    return temp;
//}
//int main()
//{
//    char arr[100];
//    gets(arr);
//    char key;
//    scanf("%c", &key);
//    int x = number(arr, key);
//    printf("%d", x);
//    return 0;
//
//
//
//	float point[7];
//	int i;
//	for (i = 0;i < 7;i++)
//	{
//		scanf("%f", &point[i]);
//		if (point[i] < 0 || point[i]>10.0)
//		{
//			printf("Wrong Input!\n");
//			break;
//		}
//	}
//	if (i == 7)
//	{
//		printf("The scores after sorting are: ");
//		int x, y;
//		for (x = 0;x < 7;x++)
//		{
//			for (y = 0;y < 7 - x - 1;y++)
//			{
//				if (point[y] > point[y + 1])
//				{
//					float temp;
//					temp = point[y];
//					point[y] = point[y + 1];
//					point[y + 1] = temp;
//				}
//			}
//		}
//		for (i = 0;i < 7;i++)
//		{
//			printf("%.1f ", point[i]);
//		}
//		printf("\n");
//		float sum;
//		float fact = 2.0;
//		sum = (point[2] + point[3] + point[4]) * fact;
//		printf("The final score is: %.1f", sum);
//	}
//}
