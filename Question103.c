#include <stdio.h>

int main() {
    int pin = 1234;
    float balance = 10000.0;
    int enteredPin, choice;
    float amount;
    printf("Enter PIN: ");
    scanf("%d", &enteredPin);
    if (enteredPin != pin) {
        printf("Invalid PIN. Access denied.\n");
        return 0;
    }
    printf("PIN accepted.\n");
    do {
        printf("\n--- ATM MENU ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Current balance: Rs %.2f\n", balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                if (amount > 0) { balance += amount; printf("Deposited Rs %.2f. New balance: Rs %.2f\n", amount, balance); }
                else printf("Invalid amount.\n");
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if (amount > balance) printf("Insufficient balance.\n");
                else if (amount <= 0) printf("Invalid amount.\n");
                else { balance -= amount; printf("Withdrawn Rs %.2f. New balance: Rs %.2f\n", amount, balance); }
                break;
            case 4:
                printf("Thank you for using ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);
    return 0;
}
