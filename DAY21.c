\\ Write a program to swap the first and last digit of a number.
    
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    digits = (int)log10(num);

    firstDigit = num / (int)pow(10, digits);  
    lastDigit = num % 10;                     

    swappedNum = lastDigit * (int)pow(10, digits)
                 + (num % (int)pow(10, digits)) / 10 * 10
                 + firstDigit;

    printf("Number after swapping first and last digits: %d\n", swappedNum);

    return 0;
}

\\ Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);

    return 0;
}

