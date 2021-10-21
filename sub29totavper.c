#include<stdio.h>
int main()
{
    printf("enter five sub. marks and find total,avg and percentage using c\n");
  int sub1,sub2,sub3,sub4,sub5,base;
  printf("enter the total no.= ");
  scanf("%d",&base);
printf("enter the sub1 marks=");
scanf("%d",&sub1);
printf("enter the sub2 marks=");
scanf("%d",&sub2);
printf("enter the sub3 marks=");
scanf("%d",&sub3);
printf("enter the sub4 marks=");
scanf("%d",&sub4);
printf("enter the sub5 marks=");
scanf("%d",&sub5);
printf("the total of marks=%d",sub1+sub2+sub3+sub4+sub5);
printf("\n the average marks =%f",(sub1+sub2+sub3+sub4+sub5)/5.0);
printf("\n the marks percent =%f",((sub1+sub2+sub3+sub4+sub5)*100.0)/(5.0*base));
    return 0;

}
