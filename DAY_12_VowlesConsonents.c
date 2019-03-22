#include<stdio.h>
#include<conio.h>
void main()
{
	int count=0,i,j,count1=0;
	char ch[5];
	printf("enter a name");
	scanf("%s",ch);
	for(i=0;i<5;i++)
	{
		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
		{
		count=count+1;
		}
		else
		{
		count1=count1+1;	
		}
	}	
	printf("vowles=%d\nconsonents=%d",count,count1);
   	
}
