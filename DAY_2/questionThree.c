#include<stdio.h>
int main(){
    int n,d;
    int product=1;
    printf("enter the number ");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        product=product*d;
        n=n/10;
    }
    printf("the product of digits are %d",product);
    return 0;
}