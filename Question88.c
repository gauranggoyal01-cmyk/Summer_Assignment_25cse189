#include <stdio.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    char result[200];
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') result[j++] = str[i];
    }
    result[j] = '\0';
    printf("String without spaces: %s\n", result);
    return 0;
}
