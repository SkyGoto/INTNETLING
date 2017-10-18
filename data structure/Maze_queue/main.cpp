#include "ADT_queue.h"
//#define LEN 100
//SelemType MG[Len][Len];
void input(int **num,int lf,int lr)
{
    srand(time(NULL));
    for (int i=0;i<lf;i++)
    {
        for (int j=0;j<lr;j++)
        {
            scanf("%d",&num[i][j]);
            //num[i][j] = rand()%2;
        }
    }
}
//500*500

//测试
int main()
{
    //SelemType *SQ = (SelemType *)malloc(sizeof(SelemType)*500);
    //SelemType **Asq = (SelemType**)malloc(sizeof(SQ)*500);

    //for (int test1=0;test1<10;test1++)
    {
    int m_len=5,n_len=6;
    int **num = (int **)malloc(sizeof(int *)*(m_len+10));
    for (int i=0;i<m_len+10;i++)
    {
        num[i] = (int *)malloc(sizeof(int)*(n_len+10));
    }
    SelemType **MG = (SelemType**)malloc(sizeof(SelemType*)*(m_len+10));
    for (int i=0;i<m_len+10;i++)
    {
        MG[i] = (SelemType*)malloc(sizeof(SelemType)*(10+n_len));
        /***********if want run many times add *************/
        /*for (int j=0;j<10+n_len;j++)
            MG[i][j].seat.x =0,MG[i][j].seat.y=0,MG[i][j].order=0,MG[i][j].flag=0,MG[i][j].di=0;
        */
    }
    //freopen("d://in.txt","r",stdin);

    int max_ = MaxLen;
    //int num[Len][Len];
    ElemType begin_;ElemType end_;
    SqQueue Q;
    InitQueue(Q);
    input(num,m_len,n_len);
    for(int i=0;i<m_len;i++)
    {
        for (int j= 0;j<n_len;j++)
        cout<<num[i][j]<<" ";
        cout<<endl;
    }
    begin_.x=begin_.y=0;
    end_.x=m_len-1;end_.y=n_len-1;
    bfs(Q,num,begin_,end_,MG,max_,m_len,n_len);
    //show_all(Q,begin_,end_,MG);

    show(Q,begin_,end_,MG);
    for (int i=0;i<m_len+10;i++)
        free(num[i]);
    free(*num);
    for (int i=0;i<m_len+10;i++)
        free(MG[i]);
    free(*MG);
    }
    return 0;
}



/*

0 0 0 1 1
1 0 0 1 1
1 1 0 1 1
1 1 0 0 1
1 1 1 0 1

0 0 0 1 1
1 0 0 1 1
1 1 0 1 1
1 1 0 0 1
1 1 1 0 0

0 0 0 0 0
0 1 1 1 0
0 1 0 0 0
0 1 0 1 1
0 0 0 0 0

*/
