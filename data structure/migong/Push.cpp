#include "ADT.h"

bool push(ElemType ch,SqStack &s2)
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
    *s2.top = ch;
    s2.top++;
    return true ;
}
