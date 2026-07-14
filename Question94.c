#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    char result[200];
    int j = 0, i = 0;
    while (str[i] != '\0') {
        char c = str[i];
        int count = 0;
        while (str[i] == c) { count++; i++; }
        result[j++] = c;
        if (count > 1) {
            char num[10];
            int len = 0, n = count;
            while (n > 0) { num[len++] = '0' + n % 10; n /= 10; }
            for (int k = len - 1; k >= 0; k--) result[j++] = num[k];
        }
    }
    result[j] = '\0';
    printf("Compressed string: %s\n", result);
    return 0;
}
