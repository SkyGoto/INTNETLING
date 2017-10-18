#include "all.h"

bool Nifix_expression(char *str,sqStack2 &s2)
{
    int i,j;
    char str1[MaxLen];
    int len = strlen(str);
    for (i=0,j=0;i<len ;i++)
    {
        if (str[i]>='0' && str[i]<='9')
        {
            str1[j++]=str[i];
        }
        else
        {
            if(s2.base==s2.top)
            {
                //if (str[i] == '(' || str[i] == ')') continue;
                push(str[i],s2);
            }
            else
            {
                while(s2.base!=s2.top &&judge(*(s2.top),str[i]))
                {
                    if (*(s2.top) != '(' && *(s2.top) != ')')
                    {
                        str1[j++] = *(s2.top);
                    }
                    pop(s2);

                }
                //if (str[i] != '(' && str[i] != ')')
                push(str[i],s2);
            }
        }
    }
    while (!IsEmpty(s2))
    {
        if (*(s2.top) != '(' && *(s2.top) != ')')
        {
            str1[j++] = *(s2.top);
        }
        pop(s2);
    }
    strcpy(str,str1);
    return true;
}
