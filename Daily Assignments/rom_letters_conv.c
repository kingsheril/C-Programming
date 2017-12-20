#include<stdio.h>
#include<string.h>
int main(void) {
	int t[5],i,l,sum=0;
	char r[5];
	gets(r);
	l=strlen(r);
	for(i=0;i<l;i++)
	{
		if(r[i]=='x'||r[i]=='X')
		{
		t[i]=10;	
		}
		if(r[i]=='v'||r[i]=='V')
		{
		t[i]=5;	
		}
		if(r[i]=='i'||r[i]=='I')
		{
		t[i]=1;	
		}
		}
	for(i=l-1;i>0;i--)
	{
		if(t[i]>t[i-1])
		{
			sum=t[i]-t[i-1];
		}
		if(t[i]<=t[i-1])
		{
		if(i==l-1) { sum=t[i-1]+t[i]; }
		else { sum=sum+t[i-1]; }
		}
		
	}
	printf("%d",sum);
	return 0;
}
