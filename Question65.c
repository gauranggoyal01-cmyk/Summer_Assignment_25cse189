#include <stdio.h>

int main() {
    int m, n;
    printf("Enter size of first array: ");
    scanf("%d", &m);
    int a[m];
    printf("Enter %d elements: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);
    int b[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int merged[m + n];
    for (int i = 0; i < m; i++) {
        merged[i] = a[i];
    }
    for (int i = 0; i < n; i++) {
        merged[m + i] = b[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
