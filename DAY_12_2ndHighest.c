#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,k=0,j=0,size=6;
	printf("enter elements");
	for(i=0;i<=5;i++)
	scanf("%d",&a[i]);
	for(i=j;i<=4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
		if(a[j]>a[i])
		break;
		}
	}
	printf("%d\n",a[i]);
/*	for(j=0;j<5;j++)
	{
		if(j==i)
		k=k+1;
		a[j]=a[k+1];
	}
	for(j=0;j<=4;j++)
		{
		printf("------------------------------");
		printf("%d\n",a[i]);
		}*/
}
