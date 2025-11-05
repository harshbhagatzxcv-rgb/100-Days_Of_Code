\\ Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch );
    if (ch >= 'A' && ch <= 'Z')
        printf("%c is an uppercase alphabet.\n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("%c is a lowercase alphabet.\n", ch);
    else if (ch >= '0' && ch <= '9')
        printf("%c is a digit.\n", ch);
    else
        printf("%c is a special character.\n", ch);

    return 0;
}
\\Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("%d is the largest number.\n", a);
    else if (b >= a && b >= c)
        printf("%d is the largest number.\n", b);
    else
        printf("%d is the largest number.\n", c);

    return 0;
}
