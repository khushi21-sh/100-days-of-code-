#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    s[strcspn(s, "\n")] = 0;
    int i = 0;
    while (s[i]) {
        while (s[i] && isspace((unsigned char)s[i])) { putchar(s[i]); i++; }
        int start = i;
        while (s[i] && !isspace((unsigned char)s[i])) i++;
        for (int j = i - 1; j >= start; j--) putchar(s[j]);
    }
    putchar('\n');
    return 0;
}