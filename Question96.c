#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int seen[256] = {0};
    char result[100];
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!seen[(int)str[i]]) {
            seen[(int)str[i]] = 1;
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("String after removing duplicates: %s\n", result);
    return 0;
}
