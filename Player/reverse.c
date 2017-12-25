#include <stdio.h>
#include<string.h>
int main(void) {
	int i,n;
	char s[10],rev[10];
	printf("Enter a String :");
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<strlen(s);i++)
{
	rev[n]=s[i];
	--n;
}
	printf("Reversed String : %s",rev);
	return 0;
}
