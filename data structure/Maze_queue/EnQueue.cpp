#include "ADT_queue.h"

bool EnQueue(SqQueue &q,PostType e,int &max_)
{
    if ((q.rear_+1)%max_== q.front_)
        {
            /****************** NO EFFECT !! ***************/
            q.base = (ElemType *)realloc(q.base,(++max_)*sizeof(ElemType));
        }
    *(q.base+q.rear_) = e;
    q.rear_ = (q.rear_+1)%max_ ;
    return true;
}


bool Dequeue(SqQueue &q,PostType &e,int max_)
{
    if (q.front_ == q.rear_ ) return false;
    e= *(q.base+q.front_);
    q.front_ = (q.front_ + 1 )%max_;
    return true ;
}

bool QEmpty(SqQueue s)
{
    if (s.front_ == s.rear_ )return true ;
    return false ;
}


bool QFront(SqQueue q , PostType &e)
{
    if (q.front_ == q.rear_ ) return false;
    e = *(q.base+q.front_);
    return true ;
}
