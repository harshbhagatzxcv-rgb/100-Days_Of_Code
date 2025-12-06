\\ Print the initials of a name.
#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int i = 0;

    printf("Enter your full name: ");
    gets(name);  

    printf("Initials: ");

    if (name[0] != ' ')
        printf("%c", toupper(name[0]));

    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ')
            printf(".%c", toupper(name[i + 1]));
        i++;
    }

    printf("\n");
    return 0;
}
\\ Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int len, i;

    printf("Enter your full name: ");
    gets(name);  

    len = strlen(name);

    printf("Formatted Name: ");

    if (name[0] != ' ')
        printf("%c.", toupper(name[0]));

    for (i = 1; i < len; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ' && name[i + 1] != '\0') {
            
            int j = i;
            while (j < len && name[j] != ' ')
                j++;
            if (j < len) // means not the last word
                printf("%c.", toupper(name[i]));
        }
    }

    i = len - 1;
    while (i >= 0 && name[i] != ' ')
        i--;
    printf(" %s\n", &name[i + 1]);

    return 0;
}

