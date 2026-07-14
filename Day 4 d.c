#include <stdio.h>

int main() {
    int start, end, n, temp, rem, sum;
    printf("enter the start number");
    scanf("%d", &start);
    printf("enter the end number");
    scanf("%d", &end);


    for(n = start; n <= end; n++) {
        temp = n;
        sum = 0;

        while(temp != 0) {
            rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp = temp / 10;
        }

        if(sum == n)
            printf("%d ", n);
    }

    return 0;
}