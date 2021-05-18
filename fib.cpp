#include<stdio.h>
int find_evenfib(int num)
{
	int a=0,b=1,c=0,pos=0;
	if(num==1)
	{
		return 0;
	}
	while (num)//                                                   answer not correct
	{
		if(c%2==0)
		{
			pos++;
			
		}
		c=a+b;
		a=b;
		b=c;
		if(pos==num)
		{
			return c;
		}
	}
}
int main()
{
	int num,n;
	scanf("%d",&num);
	n=find_evenfib(num);
	printf("%d",n);
	return 0;
}
