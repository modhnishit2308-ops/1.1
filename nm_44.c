#include <stdio.h>

int main() {
    int i;
    float value, sum = 0, mean;

    printf("Enter 10 values:\n");

    for (i = 1; i <= 10; i++) {
        printf("Value %d: ", i);
        scanf("%f", &value);
        sum += value;
    }

    mean = sum / 10;

    printf("\nSum of the 10 values = %.2f\n", sum);
    printf("Mean of the 10 values = %.2f\n", mean);

    return 0;
}
