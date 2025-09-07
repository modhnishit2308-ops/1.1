
#include <stdio.h>

int main() {
    int n, i;
    int t1 = 1, t2 = 1, nextTerm;

       printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 1; i <= n; i++) {
        if (i == 1 || i == 2) {
            printf("1 ");
        } else {
            nextTerm = t1 + t2;
            printf("%d ", nextTerm);
            t1 = t2;
            t2 = nextTerm;
        }
    }

    printf("\n");
    return 0;
}
