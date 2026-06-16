#include<stdio.h>
int main()
{
int n,sum=0,total=0,i;
scanf("%d",&n);
int a[n-1];
for(i=0;i<n-1;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
for(i=1;i<=n;i++)
{
total=total+i;
}
printf("%d",total-sum);
return 0;
}