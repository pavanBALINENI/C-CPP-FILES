#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],sum=0,i,n;
 	printf("Enter any 10 numbers");
  		for(i=0;i<10;i++)
  		{
  		scanf("%d",&a[i]);
		}
		for(i=0;i<10;i++)
		if(a[i]>0)
  		{
  		sum+=a[i];
  		printf("positive no=%d\n",a[i]);
  		}
  		printf("summ=%d\n",sum);
  		sum=0;
  		for(i=0;i<10;i++)
  		{
  		if(a[i]<0)
  		{
  		sum+=a[i];
  		printf("negative no=%d\n",a[i]);
 		}
 		}
 		printf("%d\n",sum);
}
