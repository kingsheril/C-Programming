#include<stdio.h>
int main(void)
{
int x,y,z;
scanf("%d%d%d",&x,&y,&z);
if(x>y)
{
if(x>z)
printf(x);
else
printf(z);
}
if(y>z)
printf(y);
else
printf(z);
}
