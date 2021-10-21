#include <stdio.h>

int main()
{
    printf("FINDIND QUOTIENT AND REMAINDER USING C");
    int a, b; //here take a as a divident and b asa divisor
    printf("\n enter the divident =");
    scanf("%d", &a);
    printf(" enter the divisor=");
    scanf("%d", &b);
    printf("the quotient of your given input %d/%d=%d", a, b, a / b);
    printf("\n the remainder of your given input %d/%d=%d", a, b, a % b);
    return 0;
}
