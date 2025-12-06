\\ Write a program to calculate simple and compound interest for given principal, rate, and time.
  #include <stdio.h>
#include <math.h>  

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
\\ Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int seconds, hours, minutes, remaining_seconds;
  
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    remaining_seconds = seconds % 3600;
    minutes = remaining_seconds / 60;
    remaining_seconds = remaining_seconds % 60;

    printf("Time = %02d:%02d:%02d\n", hours, minutes, remaining_seconds);

    return 0;
}

