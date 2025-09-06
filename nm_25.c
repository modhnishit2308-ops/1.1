#include <stdio.h>

int main() {
    int a, b;

    // Input values
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Check largest and smallest
    if (a > b) {
        printf("Largest = %d\n", a);
        printf("Smallest = %d\n", b);
    } else if (b > a) {
        printf("Largest = %d\n", b);
        printf("Smallest = %d\n", a);
    } else {
        printf("Both numbers are equal: %d\n", a);
    }

    return 0;
}

