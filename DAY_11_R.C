#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0;
clrscr();
printf("enter a no");
scanf("%d",a);
while(a>0)
{
b=a%10;
a=a/10;
printf("%d\n",b);
}
getch();
}