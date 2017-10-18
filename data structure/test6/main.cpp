#include "all.h"

int main()
{
    sqStack1 s1;
    sqStack2 s2;
    InitStack(s1,s2);
    char str[MaxLen];
    //end by #;
    scanf("%s",str);
    Nifix_expression(str,s2);
    cout<<str<<endl;
    cout<<GetVal(str,s1)<<endl;
    return 0;
}

/*
5+6+(9-2)+4
6/3-(9+4)*5
*/
