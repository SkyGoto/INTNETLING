#include "test3_3.h"


/*
2 3 4 4 5 6 7 8 10 56 56 58 59 60 -1
*/

int main()
{
    freopen("d://in.txt","r",stdin);
    LinkList List1,List2,List3;
    CreatList(List1);
    show(List1);
    Delete(List1);
    show(List1);
    int mink,maxk;
    scanf("%d%d",&mink,&maxk);
    Delete(List1,mink,maxk);
    show(List1);
    Decompose(List1,List2,List3);
    show(List2);
    show(List3);
    return 0;
}
