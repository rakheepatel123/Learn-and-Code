#include<stdio.h>
int main()
{
int num,temp,remainder,sum;
for(num=1;num<=500;num++)
{
temp=num;
sum=0;
while(temp!=0)
{
remainder=temp%10;
temp=temp/10;
sum=sum+(remainder*remainder*remainder);
}
if (sum==num)
printf("%d\n" ,num);
}
sum++;
return 0;
}
