#include "all_head.h"

void Insert(sqList &L,Lnode Node ,int &SIZE_TIME)
{
    if (Node.Number == -1) return ;
    if (L.length == L.listSize)
    {
        SIZE_TIME ++;
        L.arr = (Lnode *) realloc(L.arr , SIZE_TIME * MAXSIZE * sizeof(elemType));
        L.listSize = SIZE_TIME * MAXSIZE;
    }
    int i;
    for (i=0;i<L.length;i++)
    {
        if (L.arr[i].Number >= Node.Number)
            break;
    }
    for (int j=L.length;j>i;j--)
    {
        L.arr[j] = L.arr[j-1];
    }
    L.arr[i] = Node ;
    L.length++;
    return ;
}
