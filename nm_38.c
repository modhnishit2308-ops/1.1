#include <stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum (2*i-1);
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}
