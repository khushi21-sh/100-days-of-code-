#include <stdio.h>

int findPivotIndex(int arr[], int n) {
    int totalSum = 0, leftSum = 0;

    // Step 1: Calculate total sum of the array
    for (int i = 0; i < n; i++)
        totalSum += arr[i];

    // Step 2: Traverse array and check pivot condition
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];  // elements to right of i

        if (leftSum == rightSum)
            return i;  // pivot found

        leftSum += arr[i];  // update left sum
    }

    return -1;  // no pivot index found
}

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int pivot = findPivotIndex(arr, n);

    if (pivot == -1)
        printf("No Pivot Index Found (-1)\n");
    else
        printf("Pivot Index = %d\n", pivot);

    return 0;
}