#include<stdio.h>
struct Book {
    int id;
    char title[50];
    char author[50];
};
int main() {
    struct Book b;
    scanf("%d %s %s", &b.id, b.title, b.author);
    printf("Book ID: %d\n", b.id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);

    return 0;
}