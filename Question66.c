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

    int uni[m + n];
    int size = 0;

    for (int i = 0; i < m; i++) {
        int found = 0;
        for (int j = 0; j < size; j++) {
            if (a[i] == uni[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            uni[size++] = a[i];
        }
    }

    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < size; j++) {
            if (b[i] == uni[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            uni[size++] = b[i];
        }
    }

    printf("Union: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", uni[i]);
    }
    printf("\n");

    return 0;
}
