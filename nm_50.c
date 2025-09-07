#include <stdio.h>

int main() {
    int i;

    printf("Numbers from 1 to 100 divisible by 3 are:\n");

      for (i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
