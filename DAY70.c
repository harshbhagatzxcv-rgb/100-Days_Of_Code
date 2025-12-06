\\ Write a program to take a string input. Change it to sentence case.
  
#include <stdio.h>
#include <ctype.h>   
#include <string.h>

int main() {
    char str[200];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[i] = toupper(str[i]);
            break;
        }
    }

    printf("Sentence case: %s", str);
    return 0;
}
