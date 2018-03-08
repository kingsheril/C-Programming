#include<stdio.h>
int main(void)
{
char x;
scanf("%c",&x);
if((x>64&&x<91)||(x>96&&x<123))
printf("Alphabet");
else
printf("No");
}
