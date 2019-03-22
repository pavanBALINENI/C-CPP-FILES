#include<stdio.h>
#include<conio.h>
 main()
{
	printf("enter primitive  number");
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
		printf("bigger num is=%d",a);
	else if((b>a)&&(b>c))
		printf("bigger num is=%d",b);
	else
		printf("biggest num is=%d",c);

}
