\\ Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for(i = 2; i <= n; i++) {
        isPrime = 1;  // assume i is prime

        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0;  // not prime
                break;
            }
        }

        if(isPrime == 1)
            printf("%d ", i);
    }

    return 0;
}
\\ Read and print elements of a one-dimensional array.
  
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
  
    printf("The elements of the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
