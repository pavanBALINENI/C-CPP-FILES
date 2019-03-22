#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,m=1,o=1,r,j,s;
 	printf("Enter n and r numbers");
 	scanf("%d%d",&n,&r);
  	for(i=n;i>=n-r+1;i--)
  	{
  		m*=i;	
	}
	for(j=r;j>=1;j--)
	{
		o*=i;
	}
	s=m/o;
	printf("ncr=%d",s);
   	
}
