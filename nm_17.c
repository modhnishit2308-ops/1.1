#include <stdio.h>

int main() {
    float side, area, perimeter;

       printf("Enter side of the square: ");
    scanf("%f", &side);

      area = side * side;
    perimeter = 4 * side;

    printf("Area of Square = %.2f\n", area);
    printf("Perimeter of Square = %.2f\n", perimeter);

    return 0;
}
