#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    s[strcspn(s, "\n")] = 0;
    char *words[100];
    int w = 0;
    char *tok = strtok(s, " \t");
    while (tok && w < 100) { words[w++] = tok; tok = strtok(NULL, " \t"); }
    if (w == 0) { printf("\n"); return 0; }
    for (int i = 0; i < w - 1; i++) {
        printf("%c. ", toupper((unsigned char)words[i][0]));
    }
    printf("%s\n", words[w-1]);
    return 0;
}