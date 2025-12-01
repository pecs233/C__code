#include <stdio.h>
#include "string.h"
#include "assert.h"
void* My_memcpy(void* des, const void* sou, size_t num)
{
    assert(des && sou);
    void* ret = des;
    while(num--)
    {
        *((char*)des) = *((char*)sou);
        ((char*)des)++;
        ((char*)sou)++;
    }
    return ret;
}
int main()
{
    int arr1[] = { 1,2,3,4,5,6,7 };
    int arr2[30] = { 0 };
    int sz = sizeof(arr1) / sizeof(arr1[0]);
    My_memcpy(arr2, arr1,sz*sizeof(arr1[0]));
    int i;
    for (i = 0;i < 7;i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}