#include <stdio.h>

int main() {
    int pin = 1234, enteredPin;
    int balance = 5000;
    int choice, amount;

    printf("Enter PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin == pin) {

        printf("\n1. Check Balance");
        printf("\n2. Withdraw Money");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Balance = %d", balance);
        }
        else if (choice == 2) {
            printf("Enter amount: ");
            scanf("%d", &amount);

            if (amount <= balance) {
                balance = balance - amount;
                printf("Withdrawal Successful\n");
                printf("Remaining Balance = %d", balance);
            }
            else {
                printf("Insufficient Balance.");
            }
        }
        else {
            printf("Invalid Choice.");
        }
    }
    else {
        printf("Wrong PIN!");
    }

    return 0;
}