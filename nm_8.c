#include <stdio.h>

int main() {
    float dollar, rupees;

    printf("Enter amount in Dollar: ");
    scanf("%f", &dollar);

    rupees = dollar * 48;

    printf("%.2f Dollar = %.2f Rupees\n", dollar, rupees);

    return 0;
}
