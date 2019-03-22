#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],b[10],i;
	printf("enter elements");
	for(i=0;i<=5;i++)
	scanf("%d",&a[i]);
	for(i=0;i<=5;i++)
	b[i]=a[i];
	for(i=0;i<=5;i++)
	printf("%d\n",b[i]);
}
