#include<stdio.h>
#include<conio.h>
void main()
{
	int x=3,y=4;
	x=x^y;
	y=y^x;
	x=x^y;
	printf("%d%d",x,y);
}
