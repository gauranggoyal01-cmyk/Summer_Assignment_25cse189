#include <stdio.h>

int main() {
    int num, original, rev = 0, digit;

    printf("Enter any number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;  
        rev = rev * 10 + digit;    
        num = num / 10;      
    }

    if (rev == original)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");

    return 0;
}
