#include <stdio.h>

int main() {
    int i, n;
    float num, largest, smallest;

    printf("Enter 100 numbers:\n");

      scanf("%f", &num);
    largest = smallest = num;

    for (i = 2; i <= 100; i++) {
        scanf("%f", &num);

        if (num > largest) {
            largest = num;
        }
        if (num < smallest) {
            smallest = num;
        }
    }

    printf("\nLargest number = %.2f\n", largest);
    printf("Smallest number = %.2f\n", smallest);

    return 0;
}


