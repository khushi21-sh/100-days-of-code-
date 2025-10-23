#include <stdio.h>

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid window size!\n");
        return 0;
    }

    printf("First negative integers in each subarray: ");

    // Brute force approach
    for (int i = 0; i <= n - k; i++) {
        int firstNegative = 0; // default if no negative found

        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNegative = arr[j];
                break; // first negative found, stop
            }
        }

        printf("%d", firstNegative);
        if (i != n - k)
            printf(" ");
    }

    printf("\n");
    return 0;
}