#include <stdio.h>
#include <string.h>

int main() {
    char a[1000], b[1000], comb[2000];
    if (!fgets(a, sizeof a, stdin)) return 0;
    if (!fgets(b, sizeof b, stdin)) return 0;
    a[strcspn(a, "\n")] = 0; b[strcspn(b, "\n")] = 0;
    if (strlen(a) != strlen(b)) { printf("Not a rotation\n"); return 0; }
    strcpy(comb, a); strcat(comb, a);
    if (strstr(comb, b)) printf("Rotation\n"); else printf("Not a rotation\n");
    return 0;
}