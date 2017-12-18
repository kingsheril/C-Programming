#include<stdio.h>
int main(void)
{
int x,y;
printf("Enter Two Numbers : \n");
scanf("%d%d",&x,&y);
printf("\nSum        = %d\nDifference = %d\nProduct    = %d\nQuotient   = %d\nRemainder  = %d\n",x+y,x-y,x*y,x/y,x%y);
return 0;
}
