#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,i;
	printf("enter a value\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	if(n%i==0)
	sum+=i;
	}
	if(sum==n)
	printf("%d is a perfect number",n);
	else 
		printf("%d is not a perfect number",n);
}
