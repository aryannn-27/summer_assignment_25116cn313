#include<stdio.h>
int armstrong(int n)
{
int r,s=0,t=n;
while(n>0)
{
r=n%10;
s=s+r*r*r;
n=n/10;
}
if(s==t)
return 1;
else
return 0;
}
int main()
{
int n;
scanf("%d",&n);
if(armstrong(n))
printf("Armstrong");
else
printf("Not Armstrong");
return 0;
}