#include "get_num.h"

bool CreatList(sqList &L,int size_)
{
    if (!InitList(L,size_))
        return false ;
    //printf("please input some numbers  end by 0\n");
    elemType e;
    scanf("%d",&e);
    while (e)
    {
        if (L.length>=L.listSize)
            return false;
        L.arr[L.length++] = e ;
        scanf("%d",&e);
    }
    return true ;
}
