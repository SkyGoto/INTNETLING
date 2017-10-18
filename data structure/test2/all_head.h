#ifndef ALL_HEAD_H_INCLUDED
#define ALL_HEAD_H_INCLUDED

#include "bits/stdc++.h"
using namespace std;
#define MAXSIZE 9

typedef struct node
{
    int Number;
    char name[MAXSIZE];
    char sex[MAXSIZE];
    double math;
    double english;
    double program;
    double average;
}Lnode;

typedef Lnode elemType;


typedef struct node1
{
    elemType *arr;
    int listSize;
    int length;
}sqList;


#endif // ALL_HEAD_H_INCLUDED

void Draw();
bool InitList(sqList &L,int size_);
bool InitList(sqList &L);
void InputNode(Lnode &Node);
void print(sqList L);
void print(Lnode N);
void print1(sqList L);
bool CreatList(sqList &L , int size_);
bool Search(sqList L,Lnode &Node,int e);
void Delete(sqList &L,Lnode &Node,int Number);
bool Revise(sqList &L,int e );
void Insert(sqList &L,Lnode Node ,int &SIZE_TIME);
void Clear();
