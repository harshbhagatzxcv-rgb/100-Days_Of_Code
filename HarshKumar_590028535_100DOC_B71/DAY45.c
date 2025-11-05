\\ Count frequency of a given character in a string.
#include <stdio.h>

int main() {
    char str[200], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    gets(str);  

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    while (str[i] != '\0') {
        if (str[i] == ch)
            count++;
        i++;
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}
\\ Toggle case of each character in a string.
  
#include <stdio.h>

int main() {
    char str[200];
    int i = 0;
    printf("Enter a string: ");
    gets(str);  

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;  
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;  
        i++;
    }

    printf("Toggled string: %s\n", str);

    return 0;
}
