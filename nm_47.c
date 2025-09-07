#include <stdio.h>

int main() {
    int i;
    float num;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter 200 numbers:\n");

    for (i = 1; i <= 200; i++) {
        scanf("%f", &num);

        if (num > 0) {
            positive++;
        } else if (num < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    printf("\nPositive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);
    printf("Zeroes = %d\n", zero);

    return 0;
}
