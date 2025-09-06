#include <stdio.h>

int main() {
    int i, n;
    float value, sum = 0, mean;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Value %d: ", i);
        scanf("%f", &value);
        sum += value;
    }

    mean = sum / n;

    printf("\nSum of the %d values = %.2f\n", n, sum);
    printf("Mean of the %d values = %.2f\n", n, mean);

    return 0;
}

