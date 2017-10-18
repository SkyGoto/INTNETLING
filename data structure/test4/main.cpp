#include "bits/stdc++.h"

using namespace std;

typedef struct node
{
    double coef;
    int expen;
    node *next;
}*LinkList,term;

void CreatList(LinkList &L)
{
    LinkList p;//<=>term *p
    p = L = (LinkList )malloc(sizeof(term));
    L->next=nullptr;
    printf("input coef and expen end by -5.05,-1\n");
    double coef;
    int expen;
    scanf("%lf%d",&coef,&expen);
    while (expen!=-1)
    {
        LinkList q = (LinkList )malloc(sizeof(term));
        q->coef=coef;
        q->expen=expen;
        p->next=q;p=q;
        p->next=nullptr;
        scanf("%lf%d",&coef,&expen);
    }
    return ;
}
/*
5 6
3 2
1 0
0 -1
*/
void show(LinkList L)
{
    L=L->next;
    if (!L) cout<<"???"<<endl;
    while (L)
    {
        if (L->next)
            cout<<L->coef<<"X^"<<L->expen<<"+";
        else
            cout<<L->coef<<"X^"<<L->expen;
        L=L->next;
    }
    cout<<endl;
}

void operation(LinkList L1,LinkList L2,LinkList &L,bool WhichOperation)
{
    int mp;
    if (WhichOperation)
        mp=1;
    else
        mp=-1;
    LinkList p;
    p = L = (LinkList )malloc(sizeof(term));
    L->next=nullptr;
    L1 = L1->next ,L2 = L2->next;
    while (L1 && L2)
    {
        if (L1->expen>L2->expen)
        {
            p->next = (LinkList )malloc(sizeof(term));
            p=p->next;
            p->coef = L1->coef ;
            p->expen = L1->expen;
            p->next=nullptr;
            L1=L1->next;
        }
        else if(L1->expen < L2->expen)
        {
            p->next = (LinkList )malloc(sizeof(term));
            p=p->next;
            p->coef = L2->coef * mp;
            p->expen = L2->expen;
            p->next=nullptr;
            L2=L2->next;
        }
        else
        {
            if (L1->coef + mp * L2->coef)
            {
                p->next = (LinkList )malloc(sizeof(term));
                p=p->next;
                p->coef = L1->coef + mp * L2->coef;
                p->expen = L2->expen;
                p->next=nullptr;
                L1=L1->next;
                L2=L2->next;
            }
            else
            {
                L1=L1->next;
                L2=L2->next;
                continue;
            }
        }
    }

    if (L1)
    {
        while (L1)
        {
            p->next = (LinkList )malloc(sizeof(term));
            p=p->next;
            p->coef = L1->coef ;
            p->expen = L1->expen;
            p->next=nullptr;
            L1=L1->next;
        }
    }
    else
    {
        while (L2)
        {
            p->next = (LinkList )malloc(sizeof(term));
            p=p->next;
            p->coef = L2->coef * mp;
            p->expen = L2->expen;
            p->next=nullptr;
            L2=L2->next;
        }
    }
    return ;
}

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

int main()
{
    LinkList List1,List2,List3;
    CreatList(List1);
    CreatList(List2);
    operation(List1,List2,List3,true);
    show(List1);
    show(List2);
    show(List3);
    Inverse(List3);
    show(List3);
    return 0;
}
