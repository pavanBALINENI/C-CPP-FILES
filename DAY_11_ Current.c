#include<stdio.h>
#include<conio.h>
void main()
{
	int name[20],id,units;
	float amount,surchage_amount=0,net_amount;
	printf("enter a name");
	for(i=0;i<=n;i++)
	scanf("%s",a)
	printf("enter id and units");
	scanf("%d%d",id,untis);
	if(units<199)
	{
	amount=units*1.20;
	net_amount=amount;
	printf("name=%s\nid=%d\nunits=%damount=%f\nsurchage_amount=%f,net_amount=%f",name,id,unit,cost,surchage_amount,net_amount);
	}	
	if(units>200&&units<400)
	{
	amount=units*1.20;
	net_amount=amount;
	printf("name=%s\nid=%d\nunits=%damount=%f\nsurchage_amount=%f,net_amount=%f",name,id,unit,cost,surchage_amount,net_amount);
	}	
	if(units<600&&units>400)
	{
	amount=units*1.20;
	surchage_amount=amount*15/100;
	net_amount=amount+surchage_amount;
	printf("name=%s\nid=%d\nunits=%damount=%f\nsurchage_amount=%f,net_amount=%f",name,id,unit,cost,surchage_amount,net_amount);
	}	
	
}
