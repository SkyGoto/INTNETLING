#include "get_num.h"
#include "cstdio"
void print(sqList L)
{
    //puts("number is ");
    for(int i=0;i<L.length;i++)
    {
        printf("%d ",L.arr[i]);
    }
    printf("\n");
    return ;
}
