#include <stdio.h>

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    int count = 0, inWord = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            if (!inWord) { count++; inWord = 1; }
        } else {
            inWord = 0;
        }
    }
    printf("Word count = %d\n", count);
    return 0;
}
