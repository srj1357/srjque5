#include<stdio.h>
int main()
{
    printf("CELCIUS TO FEREHITS USING C \n");
    float cel;
    printf("enter the temp. in celcius=");
    scanf("%f",&cel);
    printf("the temp. in fer. =%f",((float)9/5*cel)+32);
    return 0;
}