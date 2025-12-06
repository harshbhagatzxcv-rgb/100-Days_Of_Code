\\ Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char date[20];
    int day, month, year;

    printf("Enter date (dd/mm/yyyy): ");
    gets(date);  

    sscanf(date, "%d/%d/%d", &day, &month, &year);

    char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
  
    if (month < 1 || month > 12) {
        printf("Invalid month entered.\n");
        return 0;
    }

    printf("Formatted date: %02d-%s-%04d\n", day, months[month - 1], year);

    return 0;
}
\\ Print all sub-strings of a string.
  
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j, k;

    printf("Enter a string: ");
    gets(str);  

    len = strlen(str);

    printf("All substrings of the given string are:\n");

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
          
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}

