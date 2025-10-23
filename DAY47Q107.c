#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Previous Greater Elements: ");

    // Brute force approach (Nested Loop)
    for (int i = 0; i < n; i++) {
        int prevGreater = -1;

        // Look for greater element on the left side
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;  // nearest greater element found
            }
        }

        // Print output in comma-separated format
        printf("%d", prevGreater);
        if (i != n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}