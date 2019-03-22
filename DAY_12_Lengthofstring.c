#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10];
	int i=0,count=0;
	printf("enter name");
	scanf("%s",a);
	while(i<10)
	{
	if(a[i]=='\0')
	break;
	count+=1;
	i++;
	}
	printf("length=%d",count);
}
