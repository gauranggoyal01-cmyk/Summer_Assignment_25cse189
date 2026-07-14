#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int freq[256] = {0};
    for (int i = 0; str[i] != '\0'; i++) freq[(int)str[i]]++;
    char result = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] == 1) { result = str[i]; break; }
    }
    if (result) printf("First non-repeating character: %c\n", result);
    else printf("No non-repeating character found\n");
    return 0;
}
