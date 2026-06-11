#include<stdio.h>
int reverse(int num, int rev){
    if(num == 0)
    return rev;
    return reverse(num / 10, rev * 10 + num % 10);
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversed = reverse(num, 0);
    printf("Reversed number = %d\n", reversed);
    return 0;
}