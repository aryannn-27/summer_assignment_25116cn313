#include<stdio.h>
int main()
{
int n,i,l,sl;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
l=sl=a[0];
for(i=1;i<n;i++)
{
if(a[i]>l)
{
sl=l;
l=a[i];
}
else if(a[i]>sl&&a[i]!=l)
sl=a[i];
}
printf("%d",sl);
return 0;
}