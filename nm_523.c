#include <stdio.h>

int main() {
    int num, temp, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;


    if (temp < 0) {
        temp = -temp;
    }

    while (temp != 0) {
        digit = temp % 10;
        sum += digit;
        temp = temp / 10;
  }

    printf("Sum of digits of %d is: %d\n", num, sum);

    return 0;
}
