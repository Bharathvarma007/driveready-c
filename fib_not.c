#include<stdio.h>
void fib(int num)//4
{
	int a=0,b=1,c;
	if(num==0)
	{
		printf("true");
	}
	else
	{
		
	while(num>b)//1
	{
		c=a+b;//1
		a=b;//
		b=c;//
		//printf("%d\n",c);
		
		if(num==c)
		{
			printf("true");
			break;
		}
	}
if(num!=c)
{
	printf("false");
}
	
}
}
int main()
{
	int num;
	scanf("%d",&num);
	fib(num);
	return 0;
}
