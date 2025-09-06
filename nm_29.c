#include <stdio.h>

int main() {
    float gross, allowance, deduction, net_salary;

    printf("Enter Gross Salary: ");
    scanf("%f", &gross);

    if (gross > 20000) {
        allowance = 0.10 * gross;   // assuming 10% allowance
        deduction = 0.15 * gross;   // 15% deduction
    }
    else if (gross > 10000) {
        allowance = 0.10 * gross;
        deduction = 0;   // no deduction
    }
    else {
        allowance = 0.05 * gross;
        deduction = 0;   // no deduction
    }

    net_salary = gross + allowance - deduction;

    // Output
    printf("\nGross Salary = %.2f", gross);
    printf("\nAllowance = %.2f", allowance);
    printf("\nDeduction = %.2f", deduction);
    printf("\nNet Salary = %.2f\n", net_salary);

    return 0;
}
