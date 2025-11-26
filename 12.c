//#include <stdio.h>
//
//int Com_int(const void *a, const void *b)
//{
//	return (*(int *)a - *(int *)b);
//}
//int Com_char(const void* a, const void* b)
//{
//	return (*(char*)a - *(char*)b);
//}
//int main()
//{
//	int arr1[5] = { 5,4,3,2,1};
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	qsort(arr1, sz1, sizeof(arr1[0]), Com_int);
//	int i;
//	for (i = 0;i < sz1;i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	char arr2[] = { "dcbaf" };
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	qsort(arr2, sz2-1, sizeof(arr2[0]), Com_char);
//	for (i = 0;i < sz1;i++)
//	{
//		printf("%c ", arr2[i]);
//	}
//	return 0;
//}