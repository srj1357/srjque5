#include <stdio.h>

int main()
{
    printf("SWAPING OF TWO INTGER USING C");
    int a, b, c;
    printf("\n enter the first no. to swape=");
    scanf("%d", &a);
    printf(" enter the second no. to swape=");
    scanf("%d", &b);
    printf("the number before swaping:\n a=%d \nb=%d", a, b);
    c = a;
    a = b;
    b = c;
    printf("\n the number after swaping:\n a=%d \nb=%d", a, b);
    return 0;
}
