#include <stdio.h>
int main()
{
    int length, width;
    printf("FIND AREA OF RECTANGLE BY C\n");
    printf("enter the length of rectangle=");
    scanf("%d", &length);
    printf("enter the width of rectangle=");
    scanf("%d", &width);
    printf("the area of rectangle of length %d and width %d=%d", length, width, length * width);
    return 0;
}