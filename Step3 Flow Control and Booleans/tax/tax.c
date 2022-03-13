#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


double min (double, double);

int main() {
    double annualIncome = 0.0;
    double standardDeduction = 0.0;
    double totalDeduction = 0.0;
    double tax = 0.0;
    int option = 0;
    int numDependents = 0;
    int numChildren = 0;
    bool hasChildren = false;


    printf("Enter your annual income: ");
    scanf("%lf", &annualIncome);

    if (annualIncome < 0) {
        printf("Invalid annual income: %.2lf, which is less than 0!\n", annualIncome);
        exit(1);
    }

    if (annualIncome <= 9350.0) {
        printf("%.2lf\n", annualIncome);
        exit(0);
    }

    printf("What is your filing status?\n");
    printf("1) single\n");
    printf("2) married filing jointly\n");
    printf("3) married filing separately\n");
    printf("Please enter a number: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
        case 3:
            numDependents = 1;
            standardDeduction = 5700.0;
            break;
        case 2:
            numDependents = 2;
            standardDeduction = 11400.0;
            hasChildren = true;
            break;
        default:
            printf("invalid option %d", option);
            exit(1);
    }

    if (hasChildren) {
        printf("How many children do you have? ");
        scanf("%d", &numChildren);
        if (numChildren < 0) {
            printf("Invalid children number: %d, which is less than 0!\n", numChildren);
            exit(1);
        }
        numDependents += numChildren;
    }

    totalDeduction = numDependents * 3650.0 + standardDeduction;
    annualIncome -= totalDeduction;

    if (annualIncome < 0.0) {
        exit(0);
    } else if (annualIncome <= 16750.0) {
        tax = 0.1 * annualIncome;
    } else if (annualIncome <= 68000.0) {
        tax = 1675.0 + 0.15 * (annualIncome - 16750.0);
    } else if (annualIncome <= 137300.0) {
        tax = 9362.5 + 0.25 * (annualIncome - 68000.0);
    } else {
        tax = 26687.5 + 0.28 * (annualIncome - 137300.0);
    }

    printf("%.2lf\n", tax);
}

double min(double x, double y) {
    return x > y ? y : x;
}
