#include<stdio.h>
int main()
{
int nu,c=0;
scanf("%d",&nu);
while(nu!=0)
{
nu=nu/10;
c++;
}
printf("%d",c);
}
