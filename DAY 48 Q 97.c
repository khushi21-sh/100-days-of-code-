#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    s[strcspn(s, "\n")] = 0;
    int i = 0, first = 1;
    while (s[i]) {
        while (s[i] && isspace((unsigned char)s[i])) i++;
        if (s[i]) {
            if (!first) printf(" ");
            printf("%c", toupper((unsigned char)s[i]));
            first = 0;
            while (s[i] && !isspace((unsigned char)s[i])) i++;
        }
    }
    printf("\n");
    return 0;
}