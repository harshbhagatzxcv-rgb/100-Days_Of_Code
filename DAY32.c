\\ Merge two arrays.
#include <stdio.h>

int main() {
    int n1, n2, i, j;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for(j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }

    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
return 0;
}
\\ Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long num;
    int count[10] = {0};  // To count frequency of digits 0–9
    int digit, maxDigit = 0, maxCount = 0;

    printf("Enter an integer number: ");
    scanf("%ld", &num);

    if (num < 0)
        num = -num;

    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit that occurs most frequently: %d\n", maxDigit);
    printf("Number of occurrences: %d\n", maxCount);

    return 0;
}

