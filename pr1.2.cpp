#include <stdio.h>

int main() {
    float basic_salary, hra_percent, da_percent, ta_percent;
    float hra, da, ta, gross_salary;

 
    scanf("%f", &basic_salary);

    printf("Enter HRA percentage: ");
    scanf("%f", &hra_percent);

    printf("Enter DA percentage: ");
    scanf("%f", &da_percent);

    printf("Enter TA percentage: ");
    scanf("%f", &ta_percent);

   
    hra = (hra_percent / 100) * basic_salary;
    da = (da_percent / 100) * basic_salary;
    ta = (ta_percent / 100) * basic_salary;

   
    gross_salary = basic_salary + hra + da + ta;

   
    printf("\nGross Salary = %.2f\n", gross_salary);

  
}
/*
    input base salary :200
    hra:2
    da:5
    ta:10
    ouyput:
    234
*/