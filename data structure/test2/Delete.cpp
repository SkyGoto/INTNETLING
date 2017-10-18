#include "all_head.h"

void Delete(sqList &L,Lnode &Node,int Number)
{
    Node.Number=-1;
    int len = L.length;
    for (int i=0;i<len ;i++)
    {
        if (L.arr[i].Number == Number)
        {
            Node.Number=Number;
            strcpy(Node.name,L.arr[i].name) ;
            strcpy(Node.sex , L.arr[i].sex);
            Node.math = L.arr[i].math;
            Node.english = L.arr[i].english;
            Node.program = L.arr[i].program;
            Node.average = L.arr[i].average;

            for (int j=i;j<L.length-1;j++)
            {
                L.arr[j] = L.arr[j+1];
            }
            L.length--;
            break;
        }
    }
    return ;
}
