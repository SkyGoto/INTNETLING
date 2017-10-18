#include "ADT_queue.h"

bool InitQueue(SqQueue &q)
{
    q.base = (ElemType *) malloc(MaxLen * sizeof(ElemType));
    if (!q.base ) return false ;
    q.front_=q.rear_ = 0;
    q.queSize = 0;
    return true ;
}
