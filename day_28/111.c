#include<stdio.h>
struct Ticket{
    char name[50];
    int seat;
};
int main(){
    struct Ticket t;
    scanf("%s %d", t.name, &t.seat);
    printf("Ticket Booked\n");
    printf("Name: %s\n", t.name);
    printf("Seat No: %d\n", t.seat);
    return 0;
}