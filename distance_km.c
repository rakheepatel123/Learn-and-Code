#include <stdio.h>
int main() {
int meter,feet,inches,centimeter,kilometer;
printf("Enter the distance in km");
scanf("%d",&kilometer);
meter = kilometer * 1000;
feet = kilometer * 3280.84;
inches = kilometer * 39370.1;
centimeter= kilometer * 100000;
printf("meters is %d",meter);
printf("feet is %d",feet);
printf("Inch is %d",inches);
printf("centimeter is %d",centimeter);
return 0;
}
