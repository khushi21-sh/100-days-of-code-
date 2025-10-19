#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    s[strcspn(s, "\n")] = 0;
    int best_i = 0, best_len = 0;
    int i = 0;
    while (s[i]) {
        while (s[i] && !isalnum((unsigned char)s[i])) i++;
        int j = i;
        while (s[j] && isalnum((unsigned char)s[j])) j++;
        int len = j - i;
        if (len > best_len) { best_len = len; best_i = i; }
        i = j;
    }
    if (best_len == 0) { printf("\n"); return 0; }
    char word[1000];
    strncpy(word, s + best_i, best_len);
    word[best_len] = 0;
    printf("%s\n", word);
    return 0;
}