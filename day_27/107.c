#include<stdio.h>
struct Employee {
    int id;
    char name[50];
    float basic, hra, da, salary;
};
int main() {
    struct Employee e;
    scanf("%d %s %f %f %f", &e.id, e.name, &e.basic, &e.hra, &e.da);

    e.salary = e.basic + e.hra + e.da;

    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Total Salary: %.2f\n", e.salary);

    return 0;
}