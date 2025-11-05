\\ Remove all vowels from a string.
#include <stdio.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;
    char ch;

    printf("Enter a string: ");
    gets(str); 

    while (str[i] != '\0') {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
            result[j++] = str[i];

        i++;
    }

    result[j] = '\0';  

    printf("String after removing vowels: %s\n", result);

    return 0;
}
\\ Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0}; // To store frequency of each lowercase letter
    int i = 0, found = 0;

    printf("Enter a string (lowercase letters only): ");
    gets(str);  

    while (str[i] != '\0') {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;

            if (freq[ch - 'a'] == 2) {
                printf("First repeating lowercase alphabet: %c\n", ch);
                found = 1;
                break;
            }
        }
        i++;
    }

    if (!found)
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}

