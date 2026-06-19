#include <stdio.h>

int isArmstrong(int n) {
    int temp = n, sum = 0, digit;

    while (n != 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n = n / 10;
    }

    return (temp == sum);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}