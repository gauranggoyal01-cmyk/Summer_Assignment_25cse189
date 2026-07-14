#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements (sorted): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            result = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found\n", key);
    }

    return 0;
}
