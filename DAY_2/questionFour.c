#include<stdio.h>
int main(){
    int n,d;
    int rev=0;
    printf("enter the number ");
    scanf("%d",&n);
    int temp;
    temp=n;
    while(n>0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if (temp==rev)
    {
        printf("the number is palindrome");
    }else{
        printf("the number is not palindrome");
    }
    
    return 0;
}