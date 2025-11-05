\\ Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, pos, element, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100]; 

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 0;
    }

    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = element;
    n++; 
  
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
\\ Delete an element from an array.
#include <stdio.h>

int main() {
    int n, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100]; 

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
  
    printf("Enter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; 

    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

