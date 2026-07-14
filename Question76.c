#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    int primary = 0, secondary = 0;
    for (int i = 0; i < n; i++) {
        primary += a[i][i];
        secondary += a[i][n - 1 - i];
    }
    printf("Primary diagonal sum = %d\n", primary);
    printf("Secondary diagonal sum = %d\n", secondary);
    return 0;
}
