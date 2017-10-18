#include "test3_3.h"

void CreatList(LinkList &L)
{
    LinkList p;
    p = L = (LinkList )malloc(sizeof(Lnode));
    L->next=nullptr;
    printf("input coef and expen end by -5.05,-1\n");
    int num;
    scanf("%d",&num);
    while (num!=-1)
    {
        LinkList q = (LinkList )malloc(sizeof(Lnode));
        q->num=num;
        p->next=q;p=q;
        p->next=nullptr;
        scanf("%d",&num);
    }
    return ;
}
