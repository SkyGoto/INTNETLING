#include "ADT_queue.h"

bool issame(ElemType a,ElemType b)
{
    if (a.x==b.x && b.y == a.y) return true;
    else return false;
}

int way[8][2]={{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{-1,1},{1,-1}};
//bool bfs(SqQueue &q,int (*num)[Len],ElemType begin_, ElemType end_,SelemType (*MG)[Len],int max_,int x_len,int y_len)
bool bfs(SqQueue &q,int **num,ElemType begin_, ElemType end_,SelemType **MG,int max_,int x_len,int y_len)
{
    ElemType temp;
    int flag =0;
    EnQueue(q,begin_,max_);
    while (!QEmpty(q))
    {
        ElemType tnow ,tnext;
        //cout<<tnow.x<<" "<<tnext.y<<endl;
        QFront(q,tnow);
        MG[begin_.x][begin_.y].flag =1;
        //Dequeue(q,temp,max_);
        for (int i=0;i<8;i++)
        {
            if (tnow.x+ way[i][0] <0 || tnow.x+ way[i][0]>=x_len || tnow.y+ way[i][1] <0 || tnow.y+ way[i][1] >=y_len||num[tnow.x+ way[i][0]][tnow.y+ way[i][1]])
                continue;
            if ( MG[ tnow.x+ way[i][0] ][ tnow.y+ way[i][1] ].flag )
                continue;

            tnext.x=tnow.x+ way[i][0];
            tnext.y=tnow.y+ way[i][1];
            MG[tnext.x][tnext.y].order=MG[tnow.x][tnow.y].order+1;
            MG[tnext.x][tnext.y].seat.x = tnow.x;
            MG[tnext.x][tnext.y].seat.y = tnow.y;
            MG[tnext.x][tnext.y].flag = 1;
            EnQueue(q,tnext,max_);
            if (issame(tnext,end_))
            {
                flag =1;
                break;
            }
        }
        Dequeue(q,temp,max_);
        if (flag) return true ;
    }

    while (!QEmpty(q))
        Dequeue(q,temp,max_);
    return false ;
}
