#include "test3_3.h"

void show(LinkList L)
{
    L=L->next;
    if (!L) cout<<"???"<<endl;
    while (L)
    {
        cout<<L->num<<" ";
        L=L->next;
    }
    cout<<endl;
}
