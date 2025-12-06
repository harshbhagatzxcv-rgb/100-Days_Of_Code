\\ Count vowels and consonants in a string.
#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;
    char ch;
  
    printf("Enter a string: ");
    gets(str);  

    while (str[i] != '\0') {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowels++;
        
        else if (ch >= 'a' && ch <= 'z')
            consonants++;

        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
\\ Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
  
    printf("Enter a lowercase string: ");
    gets(str);  // For learning; use fgets() for safer input

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert ASCII lowercase to uppercase
        }
        i++;
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
