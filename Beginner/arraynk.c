#include<stdio.h>
int main(viod)
{
int n,k,sum=0;
scanf("%d%d",&n,&k);
int a[20];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<k;i++)
sum=sum+a[i];
printf("%d",sum);
}
