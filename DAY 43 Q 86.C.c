#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int i = 0, j = 0;
    while (s[j] != '\0' && s[j] != '\n') j++;
    j--;
    int is_pal = 1;
    while (i < j) {
        if (s[i] != s[j]) { is_pal = 0; break; }
        i++; j--;
    }
    printf(is_pal ? "Palindrome\n" : "Not palindrome\n");
    return 0;
}