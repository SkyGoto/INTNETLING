#include "all_head.h"

void print1(sqList L)
{
    //puts("number is ");
    for(int i=0;i<L.length;i++)
    {
        printf("%d ",L.arr[i].Number);
        printf("%s ",L.arr[i].name);
        printf("%s ",L.arr[i].sex);
        printf("%lf ",L.arr[i].math);
        printf("%lf ",L.arr[i].english);
        printf("%lf ",L.arr[i].program);
        printf("%lf\n",L.arr[i].average);
    }
    printf("\n");
    return ;
}


void print(sqList L)
{
    //puts("number is ");
    for(int i=0;i<L.length;i++)
    {
        cout<<L.arr[i].Number<<" ";
        cout<<L.arr[i].name<<" ";
        cout<<L.arr[i].sex<<" ";
        cout<<L.arr[i].math<<" ";
        cout<<L.arr[i].english<<" ";
        cout<<L.arr[i].program<<" ";
        cout<<L.arr[i].average<<endl;
    }
    printf("\n");
    return ;
}


void print(Lnode N)
{
    if (N.Number<0)
        return ;
    cout<<N.Number<<" ";
    cout<<N.name<<" ";
    cout<<N.sex<<" ";
    cout<<N.math<<" ";
    cout<<N.english<<" ";
    cout<<N.program<<" ";
    cout<<N.average<<endl<<endl;;
    return ;
}
