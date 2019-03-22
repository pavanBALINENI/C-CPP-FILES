#include<stdio.h>
#include<conio.h>
main()
{
int a=0,b=0,i=0,n;
clrscr();
printf("enter no");
scanf("%d",&n);
while(n>0)
{
a=n%10;
b=a+b;
n=n/10;
}
printf("%d",b);
getch();
}