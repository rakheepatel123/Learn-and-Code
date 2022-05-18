#include<stdio.h>
int main()
{
int ram, shyam, ajay;
printf("Enter the age of Ram Shyam Ajay");
scanf("%d %d %d", &ram,&shyam,&ajay);

if(ram<=ajay && ram<=shyam)
{
printf("Ram is youngest");
}
else if(shyam<=ajay && shaym<=ram)
{
printf("shyam is youngest");
}

else if(ajay<=ram && ajay<=shaym)
{
printf("ajay is Youngest");

}
    return 0;
}
