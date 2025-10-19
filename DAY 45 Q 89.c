#include <stdio.h>

int main() {
    char s[1000], target;
    if (!fgets(s, sizeof(s), stdin)) return 0;
    if (scanf(" %c", &target) != 1) return 0;
    int freq = 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
        if (s[i] == target) freq++;
    printf("Frequency=%d\n", freq);
    return 0;
}