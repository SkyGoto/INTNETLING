#ifndef ADT_H_INCLUDED
#define ADT_H_INCLUDED

#include "bits/stdc++.h"
using namespace std;

#define MaxLen 300
#define Len 5
typedef struct
{
    int x;
    int y;
}PostType;

typedef struct
{
    int order;
    //int di;
    PostType seat;
    int flag;
}SelemType;


typedef PostType ElemType;

typedef struct
{
    ElemType *base;
    ElemType *top;
    int Size_;

}SqStack;


bool InitStack(SqStack &s1);
bool pop(SqStack &s2);
bool push(ElemType ch,SqStack &s2);
bool Empty(SqStack s);
bool dfs(int (*num)[5],ElemType begin_, ElemType end_,SqStack &s,SelemType (*MG)[5]);
bool pop(SqStack &s2 ,ElemType &point );
void show(SqStack s);
#endif // ADT_H_INCLUDED
