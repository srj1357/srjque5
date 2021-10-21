#include<stdio.h>
#include<math.h>
int main()
{
    printf("AREA OF EQUELATERAL TRIANGLE USING C\n");
int a;
printf("enter the side length of triangle=");
scanf("%d",&a);
printf("the area of triangleof side %d=%f",a,(float)(sqrt(3)/4)*a*a );
}