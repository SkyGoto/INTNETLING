#include "all.h"
//s1 => number , s2 => char
int judge_char(char ch)
{
    char str[] = {'+','-','*','/'};
    for (int i=0;i<4;i++)
    {
        if (ch == str[i]) return i+1;
    }
    return 0;
}

void Clear_(sqStack1 s1)
{
    s1.top = s1.base;
    return ;
}

int GetVal(char *str , sqStack1 s1)
{
    Clear_(s1);
    int len = strlen(str);
    for (int i=0;i<len;i++)
    {
        if (str[i] >='0' && str[i] <='9')
        {
            push(str[i]-'0' ,s1);
        }
        else
        {
            int a= *(s1.top);pop(s1);
            int b = *(s1.top);pop(s1);
            int ta;
            switch (judge_char(str[i]))
            {
            case 1:
                ta = a+b;
                break;
            case 2:
                ta = b-a;
                break;
            case 3:
                ta= a*b;
                break;
            case 4:
                ta = b/a;
                break;
            }
            push(ta,s1);
        }
    }
    //int temp =temp;
    return  *(s1.top);
    //return 0;
}
