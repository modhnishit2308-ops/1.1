#include <stdio.h>

int main() {
    float radius, area;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = (22.0 / 7) * radius * radius;

    printf("Area of Circle = %.2f\n", area);

    return 0;
}
