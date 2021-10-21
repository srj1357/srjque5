#include<stdio.h>
int main()
{
    printf("FINDING ANGLE OF TRIANGLE IF TWO ANGLE ARE GIVEN USING C\n");
    float angl1,angl2;
    printf("enter the two angle to find third angle=");
    scanf("%f\n%f",&angl1,&angl2);
    printf("the third angle if two angle are %f and %f=%f",angl1,angl2,180-(angl1+angl2));
    return 0;

}