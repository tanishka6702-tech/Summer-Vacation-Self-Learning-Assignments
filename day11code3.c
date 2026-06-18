#include <stdio.h>

// Function to check prime
int isPrime(int n) {
    if (n <= 1)
        return 0; // not prime

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0; // not prime
    }

    return 1; // prime
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a Prime Number", num);
    else
        printf("%d is not a Prime Number", num);

    return 0;
}