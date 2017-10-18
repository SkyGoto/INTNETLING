#include "get_num.h"
bool InitList(sqList &L)
{
    L.arr=(elemType *) malloc(MAXLEN * sizeof(elemType));
    if (!L.arr)
        return false ;
    L.length=0 ;
    L.listSize=MAXLEN ;
    return true ;
}


bool InitList(sqList &L,int size_)
{
    L.arr=(elemType *) malloc(MAXLEN * size_ * sizeof(elemType));
    if (!L.arr)
        return false ;
    L.length=0 ;
    L.listSize=MAXLEN ;
    return true ;
}
