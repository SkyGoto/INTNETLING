#include "all_head.h"

bool Revise(sqList &L,int e )
{
    int i,len=L.length;
    for (i=0;i<len;i++)
    {
        if (L.arr[i].Number == e)
            break;
    }
    if(i==len) return false;
    else
    {
        printf("which course want change \n");
        printf("1.math\n");
        printf("2.english\n");
        printf("3.program\n");
        int num=0;
        double couse=-1;
        scanf("%d",&num);
        printf("the sours 0 - 100 \n");
        scanf("%lf",&couse);
        switch (num)
        {
        case 1:
            if (couse<=100 && couse >=0)
            L.arr[i].math= couse;
            break;
        case 2:
            if (couse<=100 && couse >=0)
            L.arr[i].english= couse;
            break;
        case 3:
            if (couse<=100 && couse >=0)
            L.arr[i].program= couse;
            break;
        default :
            break;
        }
        L.arr[i].average = (L.arr[i].math + L.arr[i].english + L.arr[i].program)/3.0;
    }
    return true;
}
