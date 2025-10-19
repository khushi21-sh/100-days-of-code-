#include <stdio.h>
#include <string.h>

int main() {
    char a[1000], b[1000];
    if (!fgets(a, sizeof a, stdin)) return 0;
    if (!fgets(b, sizeof b, stdin)) return 0;
    a[strcspn(a, "\n")] = 0; b[strcspn(b, "\n")] = 0;
    if (strlen(a) != strlen(b)) { printf("Not anagrams\n"); return 0; }
    int cnt[256] = {0};
    for (size_t i = 0; a[i]; i++) cnt[(unsigned char)a[i]]++;
    for (size_t i = 0; b[i]; i++) cnt[(unsigned char)b[i]]--;
    for (int i = 0; i < 256; i++) if (cnt[i]) { printf("Not anagrams\n"); return 0; }
    printf("Anagrams\n");
    return 0;
}