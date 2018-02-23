#include<stdio.h>
#include<stdlib.h>
int main(void)
{
char v[]={'a','e','i','o','u','A','E','I','O','U'};
char x;
scanf("%c",&x);
for(int i=0;i<10;i++)
{
if(x==v[i]){
printf("Vowel");
exit(0);
}
}
printf("Consonant");
}
