#include <stdio.h>
void factorial() {
    int n, i;
    // Use unsigned long long to prevent overflow for larger numbers
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the user entered a negative number
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            factorial *= i; // Equivalent to: factorial = factorial * i
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    //return 0;
}
