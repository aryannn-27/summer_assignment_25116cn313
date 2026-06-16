#include<stdio.h>
int main()
{
int n,i,j,c,max=0,e;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
c=1;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
c++;
}
if(c>max)
{
max=c;
e=a[i];
}
}
printf("%d",e);
return 0;
}