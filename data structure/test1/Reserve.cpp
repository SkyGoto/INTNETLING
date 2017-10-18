#include "get_num.h"

void Reserve(sqList &list1)
{
    sort(list1.arr,list1.arr+list1.length,greater<int>());
    return ;
}


void Reserve1(sqList &list1)
{
    for (int i=0,j=list1.length-1;i<list1.length/2;i++,j--)
    {
        list1.arr[i]=list1.arr[j] ^ list1.arr[i];
        list1.arr[j]=list1.arr[i] ^ list1.arr[j];
        list1.arr[i]=list1.arr[i] ^ list1.arr[j];
    }
    return ;
}
