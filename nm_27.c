#include <stdio.h>

int main() {
    float gross, allowance, deduction, net_salary;

    printf("Enter Gross Salary: ");
    scanf("%f", &gross);

    if (gross > 10000) {
        allowance = 0.10 * gross;
        deduction = 0.03 * gross;
    }
    else if (gross > 5000) {
        allowance = 0.07 * gross;
        deduction = 0.02 * gross;
    }
    else {
        allowance = 0;
        deduction = 0;
    }

    net_salary = gross + allowance - deduction;

    printf("\nGross Salary = %.2f", gross);
    printf("\nAllowance = %.2f", allowance);
    printf("\nDeduction = %.2f", deduction);
    printf("\nNet Salary = %.2f\n", net_salary);

    return 0;
}
