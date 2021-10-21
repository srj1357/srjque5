#include<stdio.h>
int main()
{
    printf("FINDING THE AREA OF TRIANGLE IF BASE AND HIEGHT GIVEN \n");
    int hieght,base;
    printf("enter the height of triangle=");
    scanf("%d",&hieght);
    printf("enter the base of triangle=");
    scanf("%d",&base);
    printf("the area of given triangle=%f",(float)1/2*base*hieght);
    return 0;
}