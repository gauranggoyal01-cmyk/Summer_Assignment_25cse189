#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int freq[256] = {0};
    char result = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
        if (freq[(int)str[i]] == 2) { result = str[i]; break; }
    }
    if (result) printf("First repeating character: %c\n", result);
    else printf("No repeating character found\n");
    return 0;
}
