\\ Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int i, n;
    float sum = 0.0;
    float numerator = 2.0, denominator = 3.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;   // numerator increases by 2
        denominator += 4; // denominator increases by 4
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}
\\ Write a program to print the following pattern:
*****
*****
*****
*****
*****
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {          
        for (j = 1; j <= 5; j++) {     
            printf("*");
        }
        printf("\n");                   
    }

    return 0;
}
