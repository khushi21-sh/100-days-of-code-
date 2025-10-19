#include <stdio.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int count[26] = {0};
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            count[c - 'a']++;
            if (count[c - 'a'] == 2) {
                printf("First repeating lowercase=%c\n", c);
                return 0;
            }
        }
    }
    printf("No repeating lowercase letter\n");
    return 0;
}