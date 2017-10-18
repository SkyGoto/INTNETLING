#include "ADT_queue.h"

//void show(SqQueue q,ElemType begin_,ElemType end_,SelemType (*MG)[Len])
void show(SqQueue q,ElemType begin_,ElemType end_,SelemType **MG)
{
    sqStack1 s1;
    InitStack(s1);
    if (QEmpty(q))
    {
        printf("No Path\n");
    }
    else
    {
        ElemType point,temp;
        //QFront(q,point);
        point = end_;

        while (!issame(point ,begin_))
        {
            temp = point;
            //printf("(%d,%d)\n",point.x+1,point.y+1);
            push(point,s1);
            point.x = MG[temp.x][temp.y].seat.x;
            point.y = MG[temp.x][temp.y].seat.y;
        }
        push(begin_,s1);
        while (!IsEmpty(s1))
        {
            printf("(%d,%d)\n",(*(s1.top)).x+1,(*(s1.top)).y+1);
            pop(s1);
        }
    }
}


void show_all(SqQueue q,ElemType begin_,ElemType end_,SelemType **MG)
{
    if (QEmpty(q))
    {
        printf("No Path\n");
    }
    else
    {
        ElemType point,temp;
        //QFront(q,point);
        point = end_;

        while (!issame(point ,begin_))
        {
            temp = point;
            printf("(%d,%d)\n",point.x+1,point.y+1);
            point.x = MG[temp.x][temp.y].seat.x;
            point.y = MG[temp.x][temp.y].seat.y;
        }
    }
}
