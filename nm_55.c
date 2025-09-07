#include <stdio.h>

int main() {
    int num, temp, reversed = 0, digit;

     printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

       if (temp < 0) {
        printf("%d is not a palindrome number.\n", num);
        return 0;
    }

      while (temp != 0) {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp = temp / 10;
    }

    if (num == reversed) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}
