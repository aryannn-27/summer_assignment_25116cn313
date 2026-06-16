#include<stdio.h>
int main()
{
int n,i,j,f;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
f=0;
for(j=0;j<i;j++)
{
if(a[i]==a[j])
{
f=1;
break;
}
}
if(f==0)
printf("%d ",a[i]);
}
return 0;
}