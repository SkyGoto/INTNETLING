#include"all.h"

bool pop(sqStack2 &s2)
{
    if (s2.base==s2.top) return false;
    s2.top--;
    return true;
}


bool pop(sqStack1 &s2)
{
    if (s2.base==s2.top) return false;
    s2.top--;
    return true;
}
