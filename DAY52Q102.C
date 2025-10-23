#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1;  // to store index of ceil

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x) {
            return mid;  // exact match found → it's the ceil
        } else if (arr[mid] < x) {
            low = mid + 1;  // move right
        } else {
            result = mid;   // possible ceil found, move left to find smaller one
            high = mid - 1;
        }
    }

    return result; // -1 if no ceil exists
}

int main() {
    int n, x;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the number x: ");
    scanf("%d", &x);

    int index = findCeil(arr, n, x);

    if (index == -1)
        printf("Ceil does not exist (-1)\n");
    else
        printf("Ceil of %d is %d at index %d\n", x, arr[index], index);

    return 0;
}