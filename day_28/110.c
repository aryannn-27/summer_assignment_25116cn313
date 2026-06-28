#include<stdio.h>
struct Account {
    int accNo;
    char name[50];
    float balance;
};
int main() {
    struct Account a;
    float amount;
    scanf("%d %s %f", &a.accNo, a.name, &a.balance);

    scanf("%f", &amount);
    a.balance += amount;
    printf("Account No: %d\n", a.accNo);
    printf("Name: %s\n", a.name);
    printf("Balance: %.2f\n", a.balance);
    return 0;
}