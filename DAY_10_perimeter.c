#include<stdio.h>
#include<conio.h>
main()
{
	printf("enter height and length in intches");
	int a,b,perimeter;
	scanf("%d%d",&a,&b);
	perimeter=2*(a+b);
	printf("perimeter of %d%dis= %d",a,b,perimeter);
}
