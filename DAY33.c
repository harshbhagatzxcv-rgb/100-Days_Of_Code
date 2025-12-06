\\ Search in a sorted array using binary search.
#include <stdio.h>

int main() {
    int n, key, low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    // Binary search
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (!found)
        printf("Element not found in the array.\n");

    return 0;
}
\\ Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, element, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100]; 

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++) {
        if (element < arr[i]) {
            break;
        }
    }

    for (j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }

    arr[i] = element;
    n++; // increase size

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

