#include <stdio.h>
int sumOfDigits(int num) {
if (num == 0) {
return 0;
}else{
  return (num % 10) + sumOfDigits(num / 10);
  }
}

int main() {
    int num, result;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;
    }
    result = sumOfDigits(num);
    printf("The sum of the digits is: %d\n", result);
    return 0;
}