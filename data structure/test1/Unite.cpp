#include "get_num.h"
bool unite(sqList List1,sqList List2, sqList &List3)
{
    List3.listSize=List1.listSize+List2.listSize;
    int List1_L=0,List2_L=0,List3_L=0;
    while (List1_L<List1.length && List2_L<List2.length)
    {
        if (List1.arr[List1_L]<=List2.arr[List2_L])
        {
            List3.arr[List3_L++] = List1.arr[List1_L];
            List1_L++;
        }
        else
        {
            List3.arr[List3_L++] = List2.arr[List2_L];
            List2_L++;
        }
    }
    if (List1_L>=List1.length)
    {
        while (List2_L<List2.length)
        {
            List3.arr[List3_L++] = List2.arr[List2_L];
            List2_L++;
        }
    }
    else
    {
        while (List1_L<List1.length)
        {
            List3.arr[List3_L++] = List1.arr[List1_L];
            List1_L++;
        }
    }
    List3.length=List3_L;
    return true;
}
