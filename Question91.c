#include <stdio.h>

int main() {
    char s1[100], s2[100];
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    int freq[256] = {0};
    for (int i = 0; s1[i] != '\0'; i++) freq[(int)s1[i]]++;
    for (int i = 0; s2[i] != '\0'; i++) freq[(int)s2[i]]--;
    int isAnagram = 1;
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) { isAnagram = 0; break; }
    }
    if (isAnagram) printf("Strings are anagrams\n");
    else printf("Strings are not anagrams\n");
    return 0;
}
