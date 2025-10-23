#include <stdio.h>

int findPivotInteger(int n) {
    int totalSum = n * (n + 1) / 2;  // Sum of numbers from 1 to n

    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;       // Sum from 1 to x
        int rightSum = totalSum - leftSum + x; // Sum from x to n

        if (leftSum == rightSum)
            return x; // pivot found
    }

    return -1; // no pivot integer found
}

int main() {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int pivot = findPivotInteger(n);

    if (pivot == -1)
        printf("No Pivot Integer Found (-1)\n");
    else
        printf("Pivot Integer = %d\n", pivot);

    return 0;
}