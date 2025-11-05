\\ Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int num1, num2, max;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;

    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("LCM of %d and %d is: %d\n", num1, num2, max);
            break;
        }
        ++max;
    }

    return 0;
}
\\ Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}

