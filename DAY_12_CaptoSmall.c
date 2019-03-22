#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	char a,b;
	printf("enter a letter");
	scanf("%c",ch);
	if(ch>65&&ch<90)
	{
	b=ch+32;
	printf("%c",b);
	}
	else if(ch>97&&ch<122)
	{
	a=ch-32;
	printf("%c",a);
	}
	else
	printf("not a letter");
}
