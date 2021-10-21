#include<stdio.h>
int main()
{
    printf("DAYS TO YEARS,WEEKS,DAYS USING C \n");
    int days;
    printf("enter the days =");
    scanf("%d",&days);
    printf("the years =%d",days/365);
    printf("\nthe weeks =%d",(days%365)/7);
    printf("\nthe days=%d",days-((days/365)*365+((days%365)/7)*7));
    return 0;
}