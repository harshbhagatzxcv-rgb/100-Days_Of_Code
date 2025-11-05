\\ Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;  

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %lld\n", n, fact);
    }

    return 0;
}
\\ Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;        
        reversed = reversed * 10 + remainder; 
        num /= 10;                       
    }
    printf("Reversed number = %d\n", reversed);

    return 0;
}
