#include<stdio.h>
int main()
{ int i,n,m,max,lcm;
scanf("%d %d",&n,&m);
max=(n>m)?n:m;
for(i=max;i>=max;i++)
{
if(i%m==0 && i%n==0)
{
    lcm=i;
    break;
}
}
printf("%d",lcm);
return 0;
}
