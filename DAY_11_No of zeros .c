#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,n,a=1,count=0;
	printf("enter a no");
	scanf("%d",n);
	while(n>5)
	{
		n=n/5;
		i+=n;
	}
	printf("%d",i);
}
