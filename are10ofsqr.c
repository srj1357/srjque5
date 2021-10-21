#include <stdio.h>
int main()
{
    printf("FINDING AREA OF SQUARE USING C");
    int side;
    printf("\n enter the length of side=");
    scanf("%d", &side);
    printf("the area of square of side %d=%d", side, side * side);
    return 0;
}