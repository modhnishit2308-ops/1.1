#include <stdio.h>

int main()
{
    int i;

    printf("The first 10 even numbers are:\n");

    for (i = 2; i <= 20; i += 2)
        printf("%d ", i);


    printf("\n");
    return 0;
}
