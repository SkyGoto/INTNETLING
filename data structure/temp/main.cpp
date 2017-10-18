#include<stdio.h>
#include<math.h>
int main()
{
int n,i;double sum=0,m;
while(scanf("%lf%d",&m,&n)!=EOF)
{
    sum=0;
for( i=1;i <=n;i++)
{
sum+=m;
m=sqrt(m);

}
printf("%.2f\n",sum);
}
return 0;
}
