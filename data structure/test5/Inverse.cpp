#include "test3_3.h"

void Inverse(LinkList &L)
{
    LinkList p=L;
    LinkList r;
    p=p->next;
    while (p->next)
    {
        r = p->next->next;
        p->next->next=L->next;
        L->next=p->next;
        p->next=r;
    }
    return ;
}
