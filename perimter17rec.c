#include <stdio.h>
int main()
{
    int length, width;
    printf("FIND PERIMETER OF RECTANGLE BY C\n");
    printf("enter the length of rectangle=");
    scanf("%d", &length);
    printf("enter the width of rectangle=");
    scanf("%d", &width);
    printf("the perimeter of rectangle of length %d and width %d=%d", length, width, 2*(length + width));
    return 0;
}