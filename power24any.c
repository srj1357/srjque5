#include<stdio.h>
#include<math.h>
int main()
{
    printf("FIND THE POWER OF ANY NO. USING C\n");
    int a,b;//a is base b is power variable
    printf("enter the no. whose power u want to find=");
    scanf("%d",&a);
    printf("enter the power=");
    scanf("%d",&b);
    printf("the result of %d^%d=%f",a,b,pow (a,b));
    return 0;
}