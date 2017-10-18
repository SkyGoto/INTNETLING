#ifndef GET_NUM_H_INCLUDED
#define GET_NUM_H_INCLUDED

#include "bits/stdc++.h"
#define MAXLEN 200005
using namespace std;


typedef  int elemType ;

typedef struct node
{
    elemType *arr;
    int listSize;
    int length;
}sqList;


#endif // GET_NUM_H_INCLUDED

int get_num();
int judge_k();
bool judge();
void print(sqList L);
bool InitList(sqList &L);
bool InitList(sqList &L,int size_);
bool CreatList(sqList &L,int size_);
bool unite(sqList List1,sqList List2, sqList &List3);
void Reserve(sqList &list1);
void DeleteList(sqList &list1);
sqList DeleteList1(sqList list1);
void Reserve1(sqList &list1);
