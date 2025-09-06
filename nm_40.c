#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for negative numbers
    if (n < 0) {
        printf("Factorial of a negative number does not exist.\n");
    } else {

        for (i = 1; i <= n; i++) {
            factorial *= i;  // factorial = factorial * i
        }

        printf("Factorial of %d is: %llu\n", n, factorial);
    }

    return 0;
}
