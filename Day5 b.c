#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0;

    printf("enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        digit = temp % 10;

        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == n)
        printf("strong Number");
    else
        printf("not a strong number");

    return 0;
}