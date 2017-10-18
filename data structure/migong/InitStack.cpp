#include "ADT.h"

bool InitStack(SqStack &s1)
{
    s1.base = (ElemType *) malloc ( MaxLen *sizeof (ElemType));
    if (!s1.base ) return false;
    s1.base = s1.top;
    s1.Size_=MaxLen;
    return true;
}

