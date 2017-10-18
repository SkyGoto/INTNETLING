#include <iostream>
#include "cstdio"
#include "cstdlib"
using namespace std;

bool judge()
{
    int n,num[200005];
    int i=0;
    while (cin>>n)
    {
        num[i++]=n;
    }
    for (int j=0;j<i-1;j++)
    {
        if (num[j]>num[j+1])
            return false;
    }
    return true;
}

int judge_k()
{

    freopen("d:\\out.txt","r",stdin);
    freopen("CON", "w", stdout);
    //freopen("d:\\tt.txt","w",stdout);
    if(judge())
    {
        cout<<"succeed"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }

    return 0;
}
