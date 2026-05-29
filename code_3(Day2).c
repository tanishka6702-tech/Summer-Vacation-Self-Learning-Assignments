# Q7. Write a program to find product of digits.
#include <stdio.h>

int main() {
    int num, product = 1, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;          // Get last digit
        product = product * digit; // Multiply digit
        num = num / 10;            // Remove last digit
    }

    printf("Product of digits = %d\n", product);

    return 0;
}