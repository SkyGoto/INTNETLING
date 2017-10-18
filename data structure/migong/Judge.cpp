#include "ADT.h"

bool issame(ElemType a,ElemType b)
{
    if (a.x==b.x && b.y == a.y) return true;
    else return false;
}
int way[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
//0,1,2,3;
bool dfs(int (*num)[5],ElemType begin_, ElemType end_,SqStack &s,SelemType (*MG)[5])
{
    ElemType tnow =begin_;
    if (num[begin_.x][begin_.y]) return false;
    if (!issame( tnow , end_ ) && !Empty(s))
    {
        for (int i=0;i<4;i++)
        {
            if ( MG[ begin_.x+ way[i][0] ][ begin_.y+ way[i][1] ].flag )
                continue;
            if (num[begin_.x+ way[i][0]][begin_.y+ way[i][1]]) continue;
            tnow.x=begin_.x+ way[i][0];
            tnow.y=begin_.y+ way[i][1];
            MG[tnow.x][tnow.y].flag = 1;
            push(tnow,s);
            if (dfs(num,tnow,end_,s,MG)) return true;
            MG[tnow.x][tnow.y].flag = 0;
            pop(s);
        }
    }
    else if (issame( tnow , end_ )) return true;
    return false;
}
