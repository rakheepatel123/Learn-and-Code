#include <stdio.h>

int main() {
int mark1,mark2,marks3,mark4,mark5,sum;
float percentage;
    printf("Enter the marks of 5 subject");
    scanf("%d,%d,%d,%d,%d",&mark1,&mark2,&mark3,&mark4,&mark5);
    sum=mark1+mark2+mark3+mark4+mark5;
    printf("Aggregate marks is %d",sum);
    percentage=(sum/500)*100;
    printf("Percentage of marks is %f",percentage);
    return 0;
}
