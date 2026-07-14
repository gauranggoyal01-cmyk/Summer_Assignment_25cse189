#include <stdio.h>

int main()
{
    int n, sum = 0, digit;
    printf("enter the number ");
    scanf("%d", &n);
    for (int i = 0; n > 0; i++)
    {
        digit = n % 10;
        n = n / 10;
        sum = sum + digit;
    }
    printf("this is sum of number : %d ", sum);

    return 0;
}