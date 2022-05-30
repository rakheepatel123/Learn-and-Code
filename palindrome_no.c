#include <stdio.h>
int main() {
int number, temp, reverse = 0, rem;
printf("Enter any number: ");
scanf("%d", &number);    
temp = number;
while (number > 0)
{
rem = number % 10;
reverse = reverse * 10 + rem;
number = number / 10;
}
if (temp == reverse)
{
printf("Palindromic number"); 
}
else
{
printf("Not a palindromic number"); 
}    
    return 0; 
}
