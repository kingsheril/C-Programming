#include<stdio.h>
#include<string.h>
int main(void)
{
char *s1,*s2;
scanf("%m[^\n]%m[^\n]",&s1,&s2);
printf("%s",s1);

for(int i=0;i<strlen(s1);i++)
{
if(s1[i]==s1[i+1])
{
	if(s2[i]==s2[i+1])
	{
		if(i==(strlen(s1)-1))
		{
			printf("Yes");
		}
		continue;
	}
	else
	{
		printf("No");
		break;
	}
}
}
return (0);
}
