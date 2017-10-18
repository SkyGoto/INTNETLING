#include "ADT.h"
SelemType MG[Len][Len];
void input(int (*num)[5])
{
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
}
//1=>block,0=>OK;
// Come To By Stack !
int main()
{
    int num[5][5];
    ElemType begin_;ElemType end_;
    SqStack S;
    InitStack(S);
    input(num);
    begin_.x=begin_.y=0;
    end_.x=end_.y=4;
    push(begin_,S);
    dfs(num,begin_,end_,S,MG);
    show(S);
    return 0;
}
/*

0 0 0 1 1
1 0 0 1 1
1 1 0 1 1
1 1 0 0 1
1 1 1 0 1

*/
