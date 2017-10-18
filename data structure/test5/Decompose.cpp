#include "test3_3.h"

void Decompose(LinkList L,LinkList &L1,LinkList &L2)//odd =>L2;
{
     LinkList q=(LinkList)malloc(sizeof(Lnode));
     LinkList p=L->next;
    if(!(L->next)) return ;
    if (L->next->num % 2)
    {
        L2=L;
        L1=q;
    }
    else
    {
        L1=L;
        L2=q;
    }
    LinkList Tp=L1,Tq=L2;
    while (p)
    {
        if (p->num % 2)
        {
            Tq->next = p;
            p=p->next;
            Tq = Tq->next;
        }
        else
        {
            Tp->next = p;
            p=p->next;
            Tp = Tp->next;
        }
    }
    Tp->next=Tq->next=nullptr;
    return ;
}
