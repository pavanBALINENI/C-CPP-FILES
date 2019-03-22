#include<stdio.h>
#include<conio.h>
#include<limits.h>
main()
{
char a='a';
unsigned char b='b';
short int c=1;
short unsigned int d=2;
int e=3;
unsigned int f=4;
long int g=5;
long unsigned int h=6;
float i=7;
double j=8;
long double k=9;
int l=sizeof(a),m=sizeof(b),n=sizeof(c),o=sizeof(d),p=sizeof(e),q=sizeof(f)
,r=sizeof(g),s=sizeof(h),t=sizeof(i),u=sizeof(j),v=sizeof(k);

printf("\n%c\n%c\n%d\n%u\n%d\n%u\n%lu\n%lu\n%f\n%lf\n%Lf",a,b,c,d,e,f,g,h,i,j,k);
printf("\nsize-------\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",l,m,n,o,p,q,r,s,t,u,v);
printf("\n%dto%d",CHAR_Min,CHAR_MAX);

}
