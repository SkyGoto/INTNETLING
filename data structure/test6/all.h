#ifndef ALL_H_INCLUDED
#define ALL_H_INCLUDED

#include "bits/stdc++.h"
using namespace std;
#define MaxLen 300
typedef int ElemType ;
typedef char CelemType;

typedef struct
{
    ElemType * base;
    ElemType *top;
    int Size_;
}sqStack1;

typedef struct
{
    CelemType * base;
    CelemType *top;
    int Size_;
}sqStack2;

typedef struct
{
    CelemType * base;
    CelemType *top;
    int Size_;
}sqStack3;


bool InitStack(sqStack1 &s1,sqStack2 &s2);
bool push(char ch,sqStack2 &s2);
bool push(int ch,sqStack1 &s2);
int judge(char ch1,char ch2);
bool pop(sqStack2 &s2);
bool pop(sqStack1 &s2);
bool Nifix_expression(char *str,sqStack2 &s2);
int GetVal(char *str , sqStack1 s1);
bool IsEmpty(sqStack2 s1);
#endif // ALL_H_INCLUDED
