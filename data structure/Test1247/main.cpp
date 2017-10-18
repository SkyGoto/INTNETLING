#include <iostream>
#include "cstdlib"
using namespace std;

typedef int QElemType ;

typedef struct Qnode
{
    QElemType data;
    struct Qnode *next;
    //struct Qnode *rear_;
}Qnode ,*QLinkptr;

//³õÊ¼»¯£»
void InitQueue(QLinkptr &LQ)
{
    LQ = (QLinkptr)malloc(sizeof(Qnode));
    LQ->next = LQ;
    return ;
}
//ÅÐ¿Õ
bool IsEmpty(QLinkptr LQ)
{
    if (LQ->next == LQ) return true;
    return false;
}
//push

void push(QLinkptr &LQ , QElemType d)
{
    QLinkptr Q;
    Q = (Qnode *)malloc(sizeof(Qnode));
    Q->data = d;
    Q->next = LQ->next;
    LQ->next = Q;
    return ;
}

void visit(QLinkptr &p,QLinkptr LQ)
{
    if (LQ->next == LQ) return ;
    p = LQ;
    QLinkptr q= LQ->next;
    while (q->next!=LQ)
    {
        q = q->next;
        p = p->next;
    }
    return ;
}

void pop(QLinkptr &LQ)
{
    QLinkptr p,q;
    visit(p,LQ);
    q = p->next;
    p->next = q->next;
    free(q);
    return ;
}



int main()
{
    QLinkptr LQ;
    InitQueue(LQ);
    push(LQ,5);
    pop(LQ);
    cout<<IsEmpty(LQ)<<endl;
    return 0;
}







