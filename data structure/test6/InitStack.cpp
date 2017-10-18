#include "all.h"

bool InitStack(sqStack1 &s1,sqStack2 &s2)
{
    s1.base = (ElemType *) malloc ( MaxLen *sizeof (ElemType));
    if (!s1.base ) return false;
    s1.top = s1.base;
    s2.base =(CelemType * )malloc (MaxLen *sizeof(CelemType));
    if (!s2.base) return false ;
    s2.top=s2.base ;
    s1.Size_=s2.Size_=MaxLen;
    return true;
}

