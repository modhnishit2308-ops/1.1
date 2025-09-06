#include <stdio.h>

int main() {
    float sub1, sub2, sub3, total, average;

    // Input marks
    printf("Enter marks of Subject 1: ");
    scanf("%f", &sub1);
    printf("Enter marks of Subject 2: ");
    scanf("%f", &sub2);
    printf("Enter marks of Subject 3: ");
    scanf("%f", &sub3);

    total = sub1 + sub2 + sub3;
    average = total / 3;

    printf("\nTotal Marks = %.2f", total);
    printf("\nAverage Marks = %.2f", average);

    if (sub1 < 35 || sub2 < 35 || sub3 < 35) {
        printf("\nResult = Fail (One or more subjects < 35)\n");
    }
    else {

        if (average >= 70)
            printf("\nGrade = Distinction\n");
        else if (average >= 60)
            printf("\nGrade = First Class\n");
        else if (average >= 50)
            printf("\nGrade = Second Class\n");
        else if (average >= 35)
            printf("\nGrade = Third Class\n");
        else
            printf("\nResult = Fail\n");
    }

    return 0;
}
