\\ Write a program to take a number as input and print its equivalent binary representation.

  #include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle the case when number is 0
    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    // Convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2;  // Store remainder (0 or 1)
        num /= 2;             // Divide number by 2
        i++;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}

\\Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    if (original == reversed)
        printf("%d is a palindrome number.\n", original);
    else
        printf("%d is not a palindrome number.\n", original);

    return 0;
}
