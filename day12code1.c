#include <stdio.h>

int isPalindrome(int n) {
    int rev = 0, temp = n;

    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }

    return (temp == rev);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}