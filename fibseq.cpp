#include<stdio.h>
void fib(int num)//4
{
	int a=0,b=1,c,n=2;
	if(num==1)
	{
		printf("%d\n",a);
	}
	else if(num==2)
	{
		printf("%d",b);
	}
	else{
		
	while(n)//1
	{
		c=a+b;//1
		a=b;//
		b=c;//
		n++;//
		
		if(num==n)//
		{
			printf("%d",c);
			break;
		}
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
