#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000], out[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int j = 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        char c = tolower((unsigned char)s[i]);
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') continue;
        out[j++] = s[i];
    }
    out[j] = '\0';
    printf("%s\n", out);
    return 0;
}