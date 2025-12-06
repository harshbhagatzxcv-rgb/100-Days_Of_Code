\\ Find the second largest element in an array.
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if array has at least two elements
    if (n < 2) {
        printf("Array must contain at least two elements.\n");
        return 0;
    }

    int largest, secondLargest;

    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("Second largest element = %d\n", secondLargest);

    return 0;
}
\\ Rotate an array to the right by k positions.
  
#include <stdio.h>

int main() {
    int n, k, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    k = k % n;

    int temp[100];

    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    for (i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    for (i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    printf("Array after rotating right by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

