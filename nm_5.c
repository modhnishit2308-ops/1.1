#include <stdio.h>

int main() {
    float num1, num2, sum, difference, product, quotient;

     printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Division with zero check
    if (num2 != 0) {
        quotient = num1 / num2;
        printf("\nResults:\n");
        printf("Addition = %.2f\n", sum);
        printf("Subtraction = %.2f\n", difference);
        printf("Multiplication = %.2f\n", product);
        printf("Division = %.2f\n", quotient);
    } else {
        printf("\nResults:\n");
        printf("Addition = %.2f\n", sum);
        printf("Subtraction = %.2f\n", difference);
        printf("Multiplication = %.2f\n", product);
        printf("Division = Not possible (division by zero)\n");
    }

    return 0;
}
