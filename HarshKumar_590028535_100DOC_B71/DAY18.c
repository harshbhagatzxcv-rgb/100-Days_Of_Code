\\ Write a program to print all factors of a given number.
#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
\\ Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int num1, num2, i, hcf;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
