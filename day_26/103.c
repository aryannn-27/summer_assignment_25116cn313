#include <stdio.h>
int main() {
    int choice;
    float balance = 1000, amount;
    printf("1.Deposit\n2.Withdraw\n3.Check Balance\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            scanf("%f", &amount);
            balance += amount;
            printf("Balance = %.2f", balance);
            break;

        case 2:
            scanf("%f", &amount);
            if (amount <= balance) {
                balance -= amount;
                printf("Balance = %.2f", balance);
            } else
                printf("Insufficient Balance");
            break;

        case 3:
            printf("Balance = %.2f", balance);
            break;

        default:
            printf("Invalid Choice");
    }
    return 0;
}