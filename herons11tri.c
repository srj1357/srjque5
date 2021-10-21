#include<stdio.h>
#include<math.h>
int main()
{
    printf("AREA OF TRIANGLE USING HERON'S FORMULA IN C\n");
int a,b,c;
float s;
printf("enter first side of triangle whose area you want to find= ");
scanf("%d",&a);
printf("enter second side of triangle whose area you want to find= ");
scanf("%d",&b);
printf("enter third side of triangle whose area you want to find= ");
scanf("%d",&c);
s=(a+b+c)/2;
printf("the area of triangle=%f",sqrt(s*(s-a)*(s-b)*(s-c)));
return 0;
}