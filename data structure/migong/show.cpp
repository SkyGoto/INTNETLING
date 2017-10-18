#include "ADT.h"

void show(SqStack s)
{
    ElemType point;
    while (!Empty(s))
    {
        pop(s,point);
        printf("(%d,%d)\n",point.x+1,point.y+1);
    }
}
