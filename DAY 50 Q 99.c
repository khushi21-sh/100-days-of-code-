#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    s[strcspn(s, "\n")] = 0;
    char *p = strstr(s, "/04/");
    if (p) {
        char out[1000];
        size_t prefix = p - s;
        strncpy(out, s, prefix);
        out[prefix] = 0;
        strcat(out, "-Apr-");
        strcat(out, p + 4);
        printf("%s\n", out);
    } else {
        printf("%s\n", s);
    }
    return 0;
}