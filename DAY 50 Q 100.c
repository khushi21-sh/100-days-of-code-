#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    s[strcspn(s, "\n")] = 0;
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        for (int len = 1; i + len <= n; len++) {
            for (int k = 0; k < len; k++) putchar(s[i + k]);
            putchar('\n');
        }
    }
    return 0;
}