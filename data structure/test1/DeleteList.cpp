#include "get_num.h"

void DeleteList(sqList &list1)
{
    int i=1;
    while (i<list1.length)
    {
        if (list1.arr[i]==list1.arr[i-1])
        {
            int j=i;
            while (j<list1.length-1)
            {
                list1.arr[j]=list1.arr[j+1];
                j++;
            }
            list1.length--;
        }
        else
        i++;
    }
    return ;
}

//O(n);
sqList DeleteList1(sqList list1)
{
    sqList list2;
    InitList(list2);
    int len=list1.length;
    list2.arr[list2.length++]=list1.arr[0];
    for (int i=1;i<len;i++)
    {
        if(list1.arr[i]==list1.arr[i-1])
        {
            continue;
        }
        else
        {
            list2.arr[list2.length++]=list1.arr[i];
        }
    }
    free(list1.arr);
    return list2;
}
