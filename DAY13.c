\\ Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if (num2 != 0)
                printf("Result = %.2f\n", num1 / num2);
            else
                printf("Error: Division by zero not allowed.\n");
            break;

        case '%':
            if ((int)num2 != 0)
                printf("Result = %d\n", (int)num1 % (int)num2);
            else
                printf("Error: Division by zero not allowed.\n");
            break;

            printf("Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    return 0;
}
Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d are:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n"); // for neat output
    return 0;
}

\\ 
