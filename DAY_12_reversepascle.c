#include<stdio.h>
#include<conio.h>
void main()
{
	int n,j,k,i;
	printf("enter a row");
	scanf("%d",&n);
	int a=n;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>a;j--)
		{
			printf("  ");
		}
		for(k=1;k<=a;k++)
		printf("*   ");
		
		printf("\n");
		a--;
	}
}
