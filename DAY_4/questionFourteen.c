#include<stdio.h>
int main(){
int n,a=0,b=1,c,i;
scanf("%d",&n);
if(n==1)
printf("Nth fibonacci term=%d", a);
else if(n==2)
printf("Nth fibonacci term=%d", b);

else{
for(i=3;i<=n;i++){
c=a+b;
a=b;
b=c;
}
printf("Nth fibonacci term=%d", c);
}
return 0;
}