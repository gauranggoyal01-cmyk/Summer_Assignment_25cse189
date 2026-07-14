#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int freq[256] = {0};
    for (int i = 0; str[i] != '\0'; i++) freq[(int)str[i]]++;
    int maxFreq = 0;
    char maxChar = str[0];
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) { maxFreq = freq[i]; maxChar = (char)i; }
    }
    printf("Maximum occurring character: '%c' (%d times)\n", maxChar, maxFreq);
    return 0;
}
