#include<stdio.h>
#include<conio.h>
void main()
{
int a,count,i;
clrscr();
printf("enter a no");
scanf("%d",a);
count=0;
for(i=1;i<=a;i++)
{// count=0;
if(a%i==0)
{
count++;
}
}
fflush(stdin);
printf("%d",count);
getch();
}