#include "all_head.h"

bool Search(sqList L,Lnode &Node,int e)
{
    int len = L.length,i;
    for (i=0;i<len;i++)
    {
        if (L.arr[i].Number == e)
        {
            Node = L.arr[i];
            break;
        }
    }
    if (i==len)
    {
        Node.Number=-1;
        return false;
    }
    return true;
}
