#include <stdio.h>
int main()
{
char firstname[20], surname[20];
int yob;
printf("Enter first name: ");
scanf("%s", firstname);
printf("Enter surname: ");
scanf("%s",surname);
printf("Enter year of birth: ");
scanf("%d", &yob);
printf("%s %s %d\n",firstname,surname,yob);
return 0;
}
