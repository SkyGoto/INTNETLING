#include "all_head.h"

bool CreatList(sqList &L , int size_)
{
    if (!InitList(L,size_))
        return false;
    int Number;
    //char name[MAXSIZE];
    //char sex[MAXSIZE];
    //double math,english,program,average;
    int tlen = L.length;
    scanf("%d",&Number);
    while (Number)
    {
        if (L.length>=L.listSize)
            return false;
        L.arr[L.length].Number = Number ;
        scanf("%s",L.arr[L.length].name);
        scanf("%s",L.arr[L.length].sex);
        scanf("%lf",&L.arr[L.length].math);
        scanf("%lf",&L.arr[L.length].english);
        scanf("%lf",&L.arr[L.length].program);
        L.arr[L.length++].average=(L.arr[tlen].program +
                                   L.arr[tlen].english +
                                   L.arr[tlen].math)/3.0;
        tlen = L.length;
        scanf("%d",&Number);
    }
    return true ;
}

