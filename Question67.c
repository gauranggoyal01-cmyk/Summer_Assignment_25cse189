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

    int inter[m];
    int size = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                int alreadyAdded = 0;
                for (int k = 0; k < size; k++) {
                    if (inter[k] == a[i]) {
                        alreadyAdded = 1;
                        break;
                    }
                }
                if (!alreadyAdded) {
                    inter[size++] = a[i];
                }
                break;
            }
        }
    }

    printf("Intersection: ");
    if (size == 0) {
        printf("None");
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", inter[i]);
    }
    printf("\n");

    return 0;
}
