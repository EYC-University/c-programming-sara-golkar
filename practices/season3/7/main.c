#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char key='y';
    int employeeNumber, income=0, i=0, tax=0, higherIncome=0, employee;
    for(i=1; key=='y' ; i++)
    {
        // get data
        printf("\nEnter %dth employee number: \n", i);
        scanf("%d", &employeeNumber);
        printf("\nEnter %dth income: \n", i);
        scanf("%d", &income);

        // Tax Calculation
        if (income<400000)
        {
            printf("Exempt from tax.");
        }
        else if (400001<income && income<500000){
            tax = (income * 10) / 100;
            printf("Your Tax: %d", tax);
        }
        else if (500001<income && income<700000){
            tax = (income * 15) / 100;
            printf("Your Tax: %d", tax);
        }
        else if (1000000<income){
            tax = (income * 17) / 100;
            printf("Your Tax: %d", tax);
        }
        else{
            printf("Tax not defined in system.");
        }

        // higher income
        if (income >= higherIncome)
        {
            higherIncome = income;
            employee = employeeNumber;
        }

        // continue
        printf("\nDo you want to continue (y\\n):");
        key=getche();
    }
    printf("\nHigher income is %d employee number : %d",higherIncome, employee);
    return 0;
}
