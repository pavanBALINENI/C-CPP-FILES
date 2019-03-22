#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
printf("enter a range");
int a,b=0,i;
float c;
scanf("%d",&a);
for(i=1;i<=a;i++)
b=i+b;
c=b/a;
printf("%f",c);
getch();
}