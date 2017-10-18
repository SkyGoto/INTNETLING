#include "all.h"
char ch[]={'+','-','*','/','(',')'};
int num_j[6][6]={
    {1,1,0,0,0,1},
    {1,1,0,0,0,1},
    {1,1,1,1,0,1},
    {1,1,1,1,0,1},
    {0,0,0,0,0,0},
    {1,1,1,1,1,1}};
int judge(char ch1,char ch2)
{
    int k1,k2;
    for (int i=0;i<6;i++)
    {
        if (ch1==ch[i]) k1=i;
        if (ch2==ch[i]) k2=i;
    }

    return num_j[k1][k2];
}

bool IsEmpty(sqStack2 s1)
{
    if (s1.base == s1.top) return true;
    return false;
}
