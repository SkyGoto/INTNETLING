#include "all_head.h"

void InputNode(Lnode &Node)
{
    scanf("%d",&Node.Number);
    scanf("%s",Node.name);
    scanf("%s",Node.sex);
    scanf("%lf",&Node.math);
    scanf("%lf",&Node.english);
    scanf("%lf",&Node.program);
    Node.average = (Node.math + Node.english + Node.program)/3.0;
    return ;
}
