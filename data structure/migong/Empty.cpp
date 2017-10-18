#include "ADT.h"

bool Empty(SqStack s)
{
    if (s.base==s.top) return true;
    else return false;
}
