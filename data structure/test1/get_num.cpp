#include "get_num.h"

int get_num()
{
    int num[200005];
	srand(time(NULL));
	freopen("d:\\in.txt","w",stdout);
	int i,k=1,j;
	int len=rand();
	num[0]=1;
	int ij=1;
	for( i=2 ;i<len && i<200000;i++)
	{
		if (rand()>100 && i!=k)
		num[ij++]=i;
		k=i;
	}
	for (j=0;j<ij;j++)
	{
	    if(rand()<800 && rand()>100)
		cout<<num[j]<<"  ";
	}
	cout<<"0"<<endl;
	cout<<endl;
	for(int j=0;j<ij;j++)
	{
	    if(rand()<1000 && rand()>300)
		cout<<num[j]<<"  ";
	}
	cout<<"0"<<endl;
	cout<<endl;

    fclose(stdout);
	return 0;
}
