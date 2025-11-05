\\ Write a program to input two numbers and display their sum.
    #include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}

\\ Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    float num1, num2, sum, difference, product, quotient;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    if (num2 != 0)
        quotient = num1 / num2;
    else {
        printf("Division by zero is not allowed.\n");
        return 0;
    }
    
    printf("\nResults:\n");
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", difference);
    printf("Product = %.2f\n", product);
    printf("Quotient = %.2f\n", quotient);

    return 0;
}

