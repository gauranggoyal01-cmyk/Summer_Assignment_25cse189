#include <stdio.h>

int main() {
    int m, n;
    printf("Enter size of first sorted array: ");
    scanf("%d", &m);
    int a[m];
    for (int i = 0; i < m; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter size of second sorted array: ");
    scanf("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &b[i]);
    }
    int merged[m + n];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] <= b[j]) merged[k++] = a[i++];
        else merged[k++] = b[j++];
    }
    while (i < m) merged[k++] = a[i++];
    while (j < n) merged[k++] = b[j++];
    printf("Merged sorted array: ");
    for (int x = 0; x < m + n; x++) printf("%d ", merged[x]);
    printf("\n");
    return 0;
}
