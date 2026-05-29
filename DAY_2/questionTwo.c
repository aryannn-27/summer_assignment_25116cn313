#include<stdio.h>
int main(){
    int n,d;
    int rev=0;
    printf("enter the number ");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    printf("the reverse is %d",rev);
    return 0;
}