#include<stdio.h>
#include<conio.h>
main()
{
printf("enter a number and rang")  ;
int a,b,i,c;
scanf("%d%d",&a,&b);
clrscr();
for(i=1;i<=b;i++)
{
c=a*i;
printf("%d*%d=%d\n",a,i,c);
}
getch();
}