#include<stdio.h>
int main()
{
float hardness, carbon_content, tensile_strength;
printf("Enter the values of hardness, carbon content , tensile strength of steel");
scanf("%f %f %f", &hardness, &carbon_content, &tensile_strength);  
if(hardness > 50 && carbon_content< 0.7 && tensile_strength> 5600)  
{  
printf("Steel Grade is 10\n");  
}  
else if(hardness > 50 && carbon_content< 0.7 )  
{  
printf("Steel Grade is 9\n");  
}  
else if (carbon_content< 0.7 && tensile_strength> 5600)  
{  
printf("Steel Grade is 8\n");  
}  
else if(hardness > 50 && tensile_strength> 5600)  
{  
printf("Steel Grade is 7\n");  
}  
else if(hardness > 50 || carbon_content< 0.7 || tensile_strength> 5600)  
{  
printf("Steel Grade is 6\n");  
}  
else   
{  
printf("Steel Grade is 5\n");  
}  

return 0;  
}  
