
#include <stdio.h>

int main() {
    int i, j, isPrime;
    int count = 0;


    for (i = 2; i <= 500; i++) {
        isPrime = 1;

               for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }


        if (isPrime) {
            count++;
        }
    }

    printf("Total number of prime numbers between 1 and 500 is: %d\n", count);

    return 0;
}
