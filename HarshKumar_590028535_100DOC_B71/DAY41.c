\\ Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    gets(str);  

    // Count characters manually
    while (str[count] != '\0') {
        count++;
    }

    printf("Number of characters in the string: %d\n", count);

    return 0;
}
\\ Print each character of a string on a new line.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str);  // Unsafe, but fine for simple programs

    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
