#include <stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (2 * i);  // i-th even number
    }

    printf("The sum of the first %d even numbers is: %d\n", n, sum);

    return 0;
}
