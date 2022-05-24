#include<stdio.h>
int main()
{
int sideA,sideB,sideC;
printf("Enter the first side of triangle: ");
scanf("%d", &sideA);
printf("Enter the second side of triangle: ");
scanf("%d", &sideB);
printf("Enter the third side of triangle: ");
scanf("%d", &sideC);
if((sideA<(sideB+sideC)) && (sideB<(sideA+sideC)) && sideC<(sideB+sideA))
printf("\n triangle is valid");
else
printf("\ntriangle is not valid");
return 0;
}
