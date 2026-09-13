#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Compound Interest (compounded annually)
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    printf("\nSimple Interest = %.2f", simpleInterest);
    printf("\nCompound Interest = %.2f\n", compoundInterest);

    return 0;
}
