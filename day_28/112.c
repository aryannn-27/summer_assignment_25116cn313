#include<stdio.h>
struct Contact{
    char name[50];
    char phone[15];
};
int main(){
    struct Contact c;
    scanf("%s %s", c.name, c.phone);
    printf("Contact Saved\n");
    printf("Name: %s\n", c.name);
    printf("Phone: %s\n", c.phone);
    return 0;
}