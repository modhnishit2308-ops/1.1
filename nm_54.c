#include <stdio.h>

int main() {
    int num, temp, reversed = 0, digit;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // store original number

    // Handle negative numbers
    int isNegative = 0;
    if (temp < 0) {
        isNegative = 1;
        temp = -temp;
    }

    // Loop to reverse digits
    while (temp != 0) {
        digit = temp % 10;          // get last digit
        reversed = reversed * 10 + digit; // append digit
        temp = temp / 10;           // remove last digit
    }

    if (isNegative) {
        reversed = -reversed;       // restore negative sign
    }

    printf("Reverse of %d is: %d\n", num, reversed);

    return 0;
}
