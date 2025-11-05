\\ Check if two strings are anagrams of each other.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};
    int i = 0, isAnagram = 1;

    printf("Enter first string (lowercase letters only): ");
    gets(str1);
    printf("Enter second string (lowercase letters only): ");
    gets(str2);

    while (str1[i] != '\0') {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            count1[str1[i] - 'a']++;
        i++;
    }
  
    i = 0;
    while (str2[i] != '\0') {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            count2[str2[i] - 'a']++;
        i++;
    }

    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}
\\ Find the longest word in a sentence.
  
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    gets(str);  

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            len = strlen(word);
            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0; 
        }

        if (str[i] == '\0')
            break;
        i++;
    }

    printf("The longest word is: %s\n", longest);
    printf("Length of the longest word: %d\n", maxLen);

    return 0;
}

