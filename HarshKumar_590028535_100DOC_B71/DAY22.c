\\ Write a program to check if a number is a strong number.
#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is not a Strong Number.\n", num);

    return 0;
} 
\\ Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int i, n;
    float sum = 0.0;
    float numerator = 1.0, denominator = 2.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;
        denominator += 2;
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}

