#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("enter a char");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	printf("capital");
	else if(ch>=97&&ch<=122)
	printf("small");
	else if(ch>=48&&ch<=57)
	printf("capital");
	else
	printf("special character");
}
