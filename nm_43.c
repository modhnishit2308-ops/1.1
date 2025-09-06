#include <stdio.h>

int main() {
    int i, sum = 0;

    for (i = 1; i <= 100; i++) {
        if (i % 13 == 0) {
            sum += i;
        }
    }

    printf("The sum of all numbers divisible by 13 from 1 to 100 is: %d\n", sum);

    return 0;
}
