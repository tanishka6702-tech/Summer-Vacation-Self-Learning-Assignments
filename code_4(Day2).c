#Q8. Write a program to check whether a number is palindrome.
#include <stdio.h>

int main() {
    int num, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;                 // Get last digit
        reverse = reverse * 10 + digit;  // Reverse the number
        num = num / 10;                  // Remove last digit
    }

    if (original == reverse)
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome Number\n");

    return 0;
}
