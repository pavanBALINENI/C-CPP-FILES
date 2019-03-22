#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,i,j,a;
	printf("enter a value\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	for(j=1;j<n;j++)
	{
		a=i*j;
		if(a==n)
		{
			if(i==j)
			{
			printf("perfect square");
			break;
			}
		}
	}
	if(i==(n-1))
	printf("not a perfect square");
	}
	
}
