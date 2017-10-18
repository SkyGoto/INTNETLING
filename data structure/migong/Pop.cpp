#include "ADT.h"

bool pop(SqStack &s2)
{
    if (s2.base==s2.top) return false;
    s2.top--;
    return true;
}



bool pop(SqStack &s2 ,ElemType &point )
{
    if (s2.base==s2.top) return false;
    s2.top--;
    point = *s2.top;
    return true;
}
