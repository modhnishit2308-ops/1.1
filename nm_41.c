#include <stdio.h>

int main() {
    int i;
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("\nPrinting your name 5 times:\n");

    for (i = 1; i <= 5; i++) {
        printf("%d. %s\n", i, name);
    }

    return 0;
}

