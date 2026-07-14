#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter number of positions to rotate right: ");
    scanf("%d", &k);

    k = k % n;

    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    printf("Array after right rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
