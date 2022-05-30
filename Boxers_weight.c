#include<stdio.h>
int main()
{
float weight;
printf("Enter weight in pounds");
scanf("%f", &weight);
if(weight<115)
printf("Boxer's weight class is Flyweight");
else if(weight>=115 && weight<=121)
printf("Boxer's weight class is Bantamweight");
else if(weight>=122 && weight<=153)
printf("Boxer's weight class is Featherweight");
else if(weight>=154 && weight<=189)
printf("Boxer's weight class is Middleweight");
else if(weight>=190)
printf("Boxer's Weight Class is Heavyweight");
else
printf("False");
}
