#ifndef ADT_QUEUE_H_INCLUDED
#define ADT_QUEUE_H_INCLUDED

#include "bits/stdc++.h"
using namespace std;
#define MaxLen 300
#define  Len 500

typedef struct
{
    int x;
    int y;
}PostType;


typedef struct
{
    int order;
    int di;
    //before point
    PostType seat;
    int flag;
}SelemType;

typedef struct
{
    int x,y;
}ElemType_;

typedef PostType ElemType;

typedef struct
{
    ElemType * base;
    ElemType *top;
    int Size_;
}sqStack1;

/*
typedef struct arr_SelemType
{
    int size_;
    int maxsize_;
    SelemType *arr;
}SelemType_arr;

*/



typedef struct QNode
{
    ElemType *base;
    int front_;
    int rear_;
    int queSize;
}SqQueue;

bool InitQueue(SqQueue &q);
bool Dequeue(SqQueue &q,PostType &e,int max_);
bool EnQueue(SqQueue &q,PostType e,int &max_);
bool QEmpty(SqQueue s);
bool QFront(SqQueue q , PostType &e);
bool issame(ElemType a,ElemType b);
//bool bfs(SqQueue &q,int (*num)[Len],ElemType begin_, ElemType end_,SelemType (*MG)[Len],int max_);
//bool bfs(SqQueue &q,int (*num)[Len],ElemType begin_, ElemType end_,SelemType (*MG)[Len],int max_,int x_len,int y_len);
bool bfs(SqQueue &q,int **num,ElemType begin_, ElemType end_,SelemType **MG,int max_,int x_len,int y_len);
//void show(SqQueue q,ElemType begin_,ElemType end_,SelemType (*MG)[Len]);
void show(SqQueue q,ElemType begin_,ElemType end_,SelemType **MG);

void show_all(SqQueue q,ElemType begin_,ElemType end_,SelemType **MG);

/********* STACK ********/
bool push(ElemType ch,sqStack1 &s2);
bool InitStack(sqStack1 &s1);
bool pop(sqStack1 &s2);
bool IsEmpty(sqStack1 s1);
#endif // ADT_QUEUE_H_INCLUDED
/*
typedef struct
{
    Queptr front_;
    Queptr rear_;
}LinkQueue;
*/
