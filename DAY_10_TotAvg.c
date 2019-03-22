#include<stdio.h>
#include<conio.h>
 main()
{
	printf("enter primitive  number");
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int total=a+b+c;
	int average=total/3;
	printf("total=%d,average=%d",total,average);
}
