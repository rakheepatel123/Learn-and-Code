#include <stdio.h>
int main()
{
int phy,chem,maths,bio,comp;
float percentage;
printf("enter 5 sub marks:");
scanf("%d%d%d%d%d",&phy,&chem,&maths,&bio,&comp);
percentage=(phy+chem+bio+maths+comp)/5.0;
printf("Percentage is %0.2f",perc);
if(percentage>=90)
{
printf("Grade A");
}
else if(percentage>=80)
{
printf("Grade B");
}
else if(percentage>=70)
{
printf("Grade C");
}
else if(percentage>=60)
{
printf("Grade D");
}
else
{
printf("Grade F");
}
return 0;
}
