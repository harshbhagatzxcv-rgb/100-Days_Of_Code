\\ Find the sum of array elements.
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // declare an array of size n

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}

\\ Find the maximum and minimum element in an array.
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
  
    int max = arr[0];
    int min = arr[0];

    // Find max and min
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}

