#include "test3_3.h"

void Delete(LinkList &L,int mink ,int maxk)
{
    LinkList p,q=L;
    p=L->next;
    while (p)
    {
        if (p->num>mink && p->num<maxk)
        {
            LinkList r = p;
            q->next = p->next;
            p=p->next;
            free(r);
        }
        else
        {
            p=p->next;
            q=q->next;
        }

    }
    return ;
}


void Delete(LinkList &L)
{
    LinkList p;
    p=L->next;
    if (!(p))return ;
    while (p->next)
    {
        if (p->num==p->next->num)
        {
            p->next=p->next->next;
        }
        else
        {
            p=p->next;
        }
    }
    return ;
}


bool judge(LinkList L)
{
    LinkList p;
    p=L->next;
    if (!(p))return true;
    while (p->next)
    {
        if (p->num>p->next->num)
        {
            return false;
        }
        p=p->next;
    }
    return true;
}
