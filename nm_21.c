#include <stdio.h>

int main() {
    float gross_salary, allowance, deduction, net_salary;

    printf("Enter Gross Salary: ");
    scanf("%f", &gross_salary);

    allowance = 0.10 * gross_salary;
    deduction = 0.03 * gross_salary;

    net_salary = gross_salary + allowance - deduction;

    printf("Gross Salary: %.2f\n", gross_salary);
    printf("Allowance (10%%): %.2f\n", allowance);
    printf("Deduction (3%%): %.2f\n", deduction);
    printf("Net Salary: %.2f\n", net_salary);

    return 0;
}
