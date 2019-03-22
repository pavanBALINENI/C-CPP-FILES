#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0,n,count=0,i=0;
	printf("enter a no");
	scanf("%d",&n);
	while(n>0)
	{
	if(n%10==0)
	count+=1;
	}
	while(n>0)
	{
		a=n%10;
		while(i<=count)
		{
			b=a;
			b*=b;
		}
		c+=b;
		n=n/10;
	}
	if(c==n)
	printf("is an amstrong\n");
	else
	printf("is not an amstrong");
}
