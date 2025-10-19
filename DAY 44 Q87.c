#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int spaces = 0, digits = 0, special = 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] == ' ') spaces++;
        else if (s[i] >= '0' && s[i] <= '9') digits++;
        else if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))) special++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}