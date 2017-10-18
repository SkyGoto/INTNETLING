#include "all.h"

bool push(char ch,sqStack2 &s2)
{
    static int cnt =1;
    if(s2.top - s2.base >=s2.Size_)
    {
        cnt++;
        s2.base=(CelemType *)realloc(s2.base , cnt * MaxLen * sizeof(CelemType));
        if (!s2.base) return false;
        s2.top = s2.base + s2.Size_;
        s2.Size_ = cnt * MaxLen;
    }
    s2.top++;
    *(s2.top)= ch;
    return true ;
}


bool push(int ch,sqStack1 &s2)
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
