#include <stdio.h>

int main() {
    float kilograms, grams;

    printf("Enter weight in kilograms: ");
    scanf("%f", &kilograms);

    grams = kilograms * 1000;

    printf("%.2f kilograms = %.2f grams\n", kilograms, grams);

    return 0;
}
