#include<stdio.h>
int fun(int one,int five,int cost)
{
	int a,b,c,d,e,f;
	a=cost/5;
	b=5*five;
	c=cost-(5*a);
	d=cost-b;
	e=(one-c);
	f=(one-d);
	if((a==five) && (cost==b))
	{
		printf("%d",five);
	}
	else if((a==five) && (cost!=b))
	{
		if(d<=one)
		{
		printf("%d %d",five,d);
		}
		else
		{
			printf("-1");
		}
	}
	else if(a<five)
	{
		if(c<one)
		{
			printf("%d %d",a,e);
		}
		else if(c==one)
		{
			printf("%d %d",a,one);
		}
	}
	else if(a>five)
	{
		if(d==one)
		{
			printf("%d %d",five,one);
		}
		else if(d<one)
		{
			printf("%d %d",five,f);
		}
	}
}
int main()
{
	int one,five,cost;
	scanf("%d%d%d",&one,&five,&cost);
	fun(one,five,cost);
	return 0;
}
