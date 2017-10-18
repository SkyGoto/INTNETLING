#include "all_head.h"

bool InitList(sqList &L)
{
    L.arr=(elemType *) malloc(MAXSIZE * sizeof(elemType));
    if (!L.arr)
        return false ;
    L.length=0 ;
    L.listSize=MAXSIZE   ;
    return true ;
}


bool InitList(sqList &L,int size_)
{
    L.arr=(elemType *) malloc(MAXSIZE * size_ * sizeof(elemType));
    if (!L.arr)
        return false ;
    L.length=0 ;
    L.listSize=MAXSIZE * size_  ;
    return true ;
}
