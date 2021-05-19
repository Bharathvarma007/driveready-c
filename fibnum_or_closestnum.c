#include<stdio.h>
int fibnum_or_closest(int num)
{
	int a=0,b=1,c=0,d;
	while(c<num)
	{
		d=c;
		c=a+b;
		a=b;
		b=c;
		if(num==c)
		{
			printf("%d",c);
		}
		
	}
	if((c-num)>(num-d))
	{
		printf("%d",d);
	}
	else if((c-num)==(num-d))
	{
		printf("%d %d",c,d);
	}
	else
	{
		printf("%d",c);
	}
 } 
int main()
{
	int num;
	scanf("%d",&num);
	fibnum_or_closest(num);
	return 0;
}
