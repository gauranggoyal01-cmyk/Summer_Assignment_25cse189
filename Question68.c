#include <stdio.h>

int main() {
    int m, n, p;
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

    printf("Enter size of third array: ");
    scanf("%d", &p);
    int c[p];
    printf("Enter %d elements: ", p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &c[i]);
    }

    printf("Common elements in all three arrays: ");
    int found = 0;

    for (int i = 0; i < m; i++) {
        int inB = 0, inC = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                inB = 1;
                break;
            }
        }
        for (int j = 0; j < p; j++) {
            if (a[i] == c[j]) {
                inC = 1;
                break;
            }
        }
        if (inB && inC) {
            printf("%d ", a[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }
    printf("\n");

    return 0;
}
