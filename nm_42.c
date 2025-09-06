#include <stdio.h>

int main() {
    int i, n;
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter how many times to print your name: ");
    scanf("%d", &n);

    printf("\nPrinting your name %d times:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d. %s\n", i, name);
    }

    return 0;
}


