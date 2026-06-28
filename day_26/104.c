#include <stdio.h>
int main() {
    int ans, score = 0;
    
    printf("1) Capital of India?\n1.Delhi 2.Mumbai 3.Kolkata 4.Chennai\n");
    scanf("%d", &ans);
    if (ans == 1) score++;

    printf("2) 5 + 3 = ?\n1.6 2.7 3.8 4.9\n");
    scanf("%d", &ans);
    if (ans == 3) score++;

    printf("3) C language was developed by?\n1.Dennis Ritchie 2.James Gosling 3.Bjarne Stroustrup 4.Guido van Rossum\n");
    scanf("%d", &ans);
    if (ans == 1) score++;

    printf("Score = %d/3", score);
    return 0;
}