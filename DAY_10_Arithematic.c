#include<stdio.h>
#include<conio.h>
int main()
{
	printf("enter primitive  number");
	int a,b,add,sub,mul,div;
	scanf("%d%d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("add=%d,sub=%d,mul=%d,div=%d",add,sub,mul,div);
	return 0;
}
