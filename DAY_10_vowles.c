#include<stdio.h>
#include<conio.h>
 main()
{
	printf("eneter a char");
	int a;
	scanf("%c",&a);
	if('a'==a||'e'==a||'i'==a||'o'==a||'u'==a)
		printf("vowel=%c",a );
	else
	printf("not a vowel=%c",a);

}
