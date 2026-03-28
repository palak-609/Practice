
#include <stdio.h>

void rearrangeEvenOdd(int arr[], int n) {
    int even[n], odd[n];
    int evenIndex = 0, oddIndex = 0;

    // Separate even and odd elements
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[evenIndex++] = arr[i];
        } else {
            odd[oddIndex++] = arr[i];
        }
    }

    // Merge even and odd arrays
    int k = 0;
    for (int i = 0; i < evenIndex; i++) {
        arr[k++] = even[i];
    }
    for (int i = 0; i < oddIndex; i++) {
        arr[k++] = odd[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    rearrangeEvenOdd(arr, n);

    printf("\nRearranged array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}



Output:


Original array: 1 2 3 4 5 6
Rearranged array: 2 4 6 1 3 5


This code:


1. Creates separate arrays for even and odd elements.
2. Iterates through the original array, separating elements into even and odd arrays.
3. Merges the even and odd arrays into the original array.


Alternatively, you can use a two-pointer approach without extra arrays:



void rearrangeEvenOdd(int arr[], int n) {
    int nextEven = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            int temp = arr[nextEven];
            arr[nextEven] = arr[i];
            arr[i] = temp;
            nextEven++;
        }
    }
}
