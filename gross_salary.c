#include<stdio.h>
int main()
{
int basic_salary,dearness_allowance,house_rent,gross_salary;
printf("Enter the basic salary");
scanf("%d",&basic_salary);
dearness_allowance=0.4*basic_salary;
house_rent=0.2*basic_salary;
gross_salary=dearness_allowance+house_rent+basic_salary;
printf("Gross Salary",gross_salary);
}
