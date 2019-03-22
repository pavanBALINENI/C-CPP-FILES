#include<stdio.h>
#include<conio.h>
void main()
{
	int n,m,d,a,b;
	printf("enter speeds and time");
	scanf("%d%d%d%d",&n,&m,&a,&b);
	d=((a+b)*n*m)/(n-m);
	printf("%d",d);
}
