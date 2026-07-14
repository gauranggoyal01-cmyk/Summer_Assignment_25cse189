#include <stdio.h>

int main()
{
    int n, digit, r = 0;
    printf("enter the number ");
    scanf("%d", &n);
    for (int i = 0; n > 0; i++)
    {
        digit = n % 10;
        n = n / 10;
        r = digit + r * 10;
    }
    printf("this is revers of number : %d ", r);

    return 0;
}