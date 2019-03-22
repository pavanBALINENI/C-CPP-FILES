#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],j=0,i=0,k;
	printf("enter elements");
	for(i=0;i<=5;i++)
	scanf("%d",&a[i]);
	for(i=0;i<=5;i++)
	j+=a[i];
	printf("%d",j);
}
