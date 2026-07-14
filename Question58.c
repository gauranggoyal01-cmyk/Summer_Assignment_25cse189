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
    printf("Enter number of positions to rotate left: ");
    scanf("%d", &k);

    k = k % n;

    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    for (int i = 0; i < n - k; i++) {
        arr[i] = arr[i + k];
    }

    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }

    printf("Array after left rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
