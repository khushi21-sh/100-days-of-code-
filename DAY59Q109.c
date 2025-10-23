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
        printf("Invalid subarray size!\n");
        return 0;
    }

    int maxSum = 0, currentSum = 0;

    // Step 1: Compute sum of first window of size k
    for (int i = 0; i < k; i++)
        currentSum += arr[i];

    maxSum = currentSum;

    // Step 2: Slide the window through the array
    for (int i = k; i < n; i++) {
        currentSum = currentSum - arr[i - k] + arr[i];  // Slide window
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum Sum of Subarray of size %d = %d\n", k, maxSum);

    return 0;
}