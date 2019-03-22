#include<stdio.h>
#include<conio.h>
void main()
{
	int **p,*q,i=2;
	q=&i;
	printf("%u\n",q);
	**p=&q;
	printf("%u",**p);
}
