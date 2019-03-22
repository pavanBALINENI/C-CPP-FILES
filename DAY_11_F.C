#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c=0,d=0,e;
clrscr();
printf("enter a number");
scanf("%d",&e);
printf("%d\n%d\n",a,b);
while(e>=d)
{
c=a+b;
a=b;
b=c;
printf("%d\n",c);
d++;
}
getch();
}