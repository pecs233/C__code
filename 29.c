#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//文件操作
//fopen,fclose,fgetc,fputc,fgets,fputs,fprintf,fscanf,fseek,ftell,rewind,ferror,feof......
int main()
{
	//文件的打开
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		printf("error!");
		return 1;
	}
	//文件的输出
	char* str1 = "Hello,I am Dzy.";
	fputs(str1, pf);
	//文件的关闭
	fclose(pf);


 
    pf= fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("error!");
		return 1;
	}
	int str[50];
	//文件的输入
	fgets(str, 16, pf);
	printf("%s\n",str);
	fclose(pf);
 


	pf = fopen("test.txt", "a");
	if (pf == NULL)
	{
		printf("error!");
		return 1;
	}
	//文件的追加
	char* str2 = "And I love Ygt.";
	fputs(str2, pf);
	fclose(pf);
	pf = NULL;
	pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("error!");
		return 1;
	}
	fgets(str, 31, pf);
	printf("%s\n",str);
	fclose(pf);

 

	//文件查找
	pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("error!");
		return 1;
	}
	fseek(pf, 6, SEEK_SET);
	char ch = fgetc(pf);
	printf("%c\n", ch);
	fseek(pf, -3, SEEK_END);
	ch = fgetc(pf);
	printf("%c\n", ch);
	long int num = ftell(pf);
	printf("%d\n", num);
	fclose(pf);
	pf = NULL;
	return 0;
}