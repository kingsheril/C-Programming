#include<stdio.h>
#include<string.h>
int main(void) {
	int l,i;
	char s[10],temp;
	printf("Enter a String : ");
	scanf("%s",s);
	l=strlen(s);
	if((l%2)!=0)
	{
	l=l-1;
	}
	for(i=0;i<l;i=i+2)
	{
		temp=s[i];
		s[i]=s[i+1];
		s[i+1]=temp;
	}
	for(i=0;i<l+1;i++)
	{
	printf("%c",s[i]);
	}
	return 0;
}
