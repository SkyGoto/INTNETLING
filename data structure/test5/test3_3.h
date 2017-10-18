#ifndef TEST3_3_H_INCLUDED
#define TEST3_3_H_INCLUDED

#include "bits/stdc++.h"
using namespace std;
typedef struct node
{
    int num;
    node *next;
}*LinkList,Lnode;

#endif // TEST3_3_H_INCLUDED


void CreatList(LinkList &L);
void show(LinkList L);
void Delete(LinkList &L,int mink ,int maxk);
void Decompose(LinkList L,LinkList &L1,LinkList &L2);
void Inverse(LinkList &L);
void Delete(LinkList &L);
bool judge(LinkList L);
