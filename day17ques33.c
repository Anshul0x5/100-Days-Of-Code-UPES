#include <stdio.h>

int main() {
    int n, original, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        remainder = n % 10;
        result += remainder * remainder * remainder;
        n = n / 10;
    }

    if (result == original)
        printf("The number is an Armstrong number.");
    else
        printf("The number is not an Armstrong number.");

    return 0;
}