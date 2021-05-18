#include<stdio.h>
int ser(int n,int a)
{
	int r, c;
	while(n)
	{
		r=n%10;
		n=n/10;
	
	if(r==a)
	{
	
	return 1;
	}
}
return 0;
	
	
}
int main()
{
	int num , dig;
	scanf("%d%d",&num,&dig);
	if(ser(num,dig))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}

