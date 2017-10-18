#include "ADT_queue.h"

bool push(ElemType ch,sqStack1 &s2)
{
    static int cnt =1;
    if(s2.top - s2.base >=s2.Size_)
    {
        cnt++;
        s2.base=(ElemType *)realloc(s2.base , cnt * MaxLen * sizeof(ElemType));
        if (!s2.base) return false;
        s2.top = s2.base + s2.Size_;
        s2.Size_ = cnt * MaxLen;
    }
    s2.top++;
    *(s2.top)= ch;
    return true ;
}



bool pop(sqStack1 &s2)
{
    if (s2.base==s2.top) return false;
    s2.top--;
    return true;
}



bool IsEmpty(sqStack1 s1)
{
    if (s1.base == s1.top) return true;
    return false;
}
