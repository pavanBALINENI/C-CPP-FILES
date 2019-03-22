#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10];
	char ch[10];
	int i=0,count=0,k=0,j;
	printf("enter name");
	scanf("%s",a);
	while(i<10)
	{
	if(a[i]=='\0')
	break;
	count+=1;
	i++;
	}
	for(j=count-1;j>=0;j--)
	{
		ch[k]=a[j];
		k++;
	}
	printf("%s",ch);
}
