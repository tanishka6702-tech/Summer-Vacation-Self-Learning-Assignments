#include <stdio.h>

int main() {
    int score = 0, ans;

    printf("Q1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Chennai\n4. Kolkata\n");
    scanf("%d", &ans);

    if (ans == 1)
        score++;

    printf("\nQ2. 5 + 7 = ?\n");
    printf("1. 10\n2. 12\n3. 14\n4. 15\n");
    scanf("%d", &ans);

    if (ans == 2)
        score++;

    printf("\nQ3. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. Bjarne Stroustrup\n3. James Gosling\n4. Guido van Rossum\n");
    scanf("%d", &ans);

    if (ans == 1)
        score++;

    printf("\nYour Score = %d/3", score);

    return 0;
}