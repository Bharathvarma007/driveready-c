#include<stdio.h>
void har(int num)
{
	int r,rev=0,c=0,a;
	a=num;
	while(num)
	{
		r=num%10;
		num=num/10;
		rev=rev*10+r;
		c=c+r;
	}
	if(a%c==0)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	har(num);
	return 0;
}
