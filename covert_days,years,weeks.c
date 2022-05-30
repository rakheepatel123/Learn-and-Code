#include <stdio.h>
 
int main()
{
int No_of_days,years,weeks,days;
printf("Enter the Number of days:");
scanf("%d",&No_of_Days);
years =No_of_Days/365;
weeks =(No_of_Days%365) / 7;
days =(No_of_Days %365) % 7;
printf("\nYears= %d",years);
printf("\nWeeks= %d",weeks);
printf("\nDays= %d",days);
return 0;
}
