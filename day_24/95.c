#include<stdio.h>
#include<string.h>
int main(){
    char str[100], longest[100];
    int i, j = 0, max = 0, len = 0;
    fgets(str, sizeof(str), stdin);

    for (i = 0;; i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            longest[j++] = str[i];
            len++;
        } else {
            if (len > max) {
                max = len;
                longest[len] = '\0';
            }
            j = 0;
            len = 0;
            if (str[i] == '\0' || str[i] == '\n')
                break;
        }
    }
    printf("%s", longest);
    return 0;
}