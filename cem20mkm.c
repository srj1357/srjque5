#include <stdio.h>
int main()
{
    printf("CENTIMETER TO METER AND KILOMETER USING C \n");
    int centimeter;
    printf("enter the length in centimeter=");
    scanf("%d", &centimeter);
    printf("the value in meter u enter in centimeter%d =%f meter", centimeter,(float)centimeter / 100);
    printf("\n the value in kilometer u enter in centimeter%d =%f kilometer", centimeter,(float)centimeter / 100000);
    return 0;
}