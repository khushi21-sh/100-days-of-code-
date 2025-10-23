#include <stdio.h>
#include <string.h>

int longestUniqueSubstring(char s[]) {
    int n = strlen(s);
    int maxLen = 0;

    // Array to store last index of characters (ASCII assumption)
    int lastIndex[256];
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int start = 0; // start index of current substring

    for (int end = 0; end < n; end++) {
        char currentChar = s[end];

        // If character repeated, move start after last occurrence
        if (lastIndex[(int)currentChar] >= start) {
            start = lastIndex[(int)currentChar] + 1;
        }

        lastIndex[(int)currentChar] = end;

        // Update maximum length
        if (end - start + 1 > maxLen)
            maxLen = end - start + 1;
    }

    return maxLen;
}

int main() {
    char s[1000];

    printf("Enter the string: ");
    scanf("%s", s);

    int result = longestUniqueSubstring(s);

    printf("Length of longest substring without repeating characters = %d\n", result);

    return 0;
}