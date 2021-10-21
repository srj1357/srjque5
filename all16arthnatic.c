#include <stdio.h>

int main()
{
    printf("ALL ARITHMATICS ON TWO NUMBER USING C");
    int a, b;
    printf("\n enter the first no.=");
    scanf("%d", &a);
    printf(" enter the second no.=");
    scanf("%d", &b);
    printf(" the sum of yours input %d+%d=%d", a, b, a + b);
    printf("\n the sub of yours input %d-%d=%d", a, b, a - b);
    printf("\n the mul of yours input %d*%d=%d", a, b, a * b);
    printf("\n the divi of yours input %d/%d quitent=%d reminder=%d", a, b, a / b,a % b);
    return 0;
}
