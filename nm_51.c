#include <stdio.h>

int main() {
    int num, temp, digit;

      printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    printf("Digits of %d are: ", num);

    while (temp > 0) {
        digit = temp % 10;
        printf("%d ", digit);
        temp = temp / 10;
    }

    printf("\n");
    return 0;
}
