#include <stdio.h>
int main()
{
    printf("DIAMETER,CIRCUMFERENCE AND AREA OF CIRCLE USING C");
    int r;
    printf("enter the radius of a circle=");
    scanf("%d", &r);
    printf("the diameter of a circle of radius %d=%d", r, 2 * r);
    printf("\n the circumfrence of a circle of radius %d=%f ", r, (float)22 / 7 * 2 * r);
    printf("\n the area of circle of radius %d=%f", r, (float)22 / 7 * r * r);
    return 0;
}