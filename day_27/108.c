#include<stdio.h>
int main() {
    char name[50];
    int m1, m2, m3, total;
    float per;
    scanf("%s %d %d %d", name, &m1, &m2, &m3);

    total = m1 + m2 + m3;
    per = total / 3.0;
    printf("Name: %s\n", name);
    printf("Total: %d\n", total);
    printf("Percentage: %.2f\n", per);

    if (per >= 40)
        printf("Result: Pass");
    else
        printf("Result: Fail");

    return 0;
}