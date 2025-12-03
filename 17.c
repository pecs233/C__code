#include <stdio.h>
#include "string.h"
#include "assert.h"
void* My_memmove(void* des, const void* sou, size_t num)
{
    assert(des && sou);
    void* ret = des;
    if (des < sou)
    {
        while (num--)
        {
            *((char*)des) = *((char*)sou);
            ((char*)des)++;
            ((char*)sou)++;
        }
    }
    else
    {
        while (num--)
        {
            *((char*)des+num) = *((char*)sou+num);
        }
    }
    return ret;
}
int main()
{
    int arr1[] = { 1,2,3,4,5,6,7,8 };
    My_memmove(arr1+2, arr1,16);
    int i;
    for (i = 0;i < 8;i++)
    {
        printf("%d ", arr1[i]);
    }
    return 0;
}