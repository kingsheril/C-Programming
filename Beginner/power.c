#include<stdio.h>
int main(void)
{
int n,p,po=1;
scanf("%d%d",&n,&p);
for(int i=0;i<p;i++)
{
po=po*n;
}
printf("%d",po);
}
