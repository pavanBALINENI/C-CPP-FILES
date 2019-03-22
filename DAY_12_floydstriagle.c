#include<stdio.h>
#include<conio.h>
void main()
{	int x,y=0,i,j;
	printf("enter rows and columns");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		for(j=0;j<=i;j++)
		{
			y=y+1;
			printf("%d",y);
		}
		printf("\n");
	}
}
