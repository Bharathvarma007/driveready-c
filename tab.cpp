#include<stdio.h>
int main()
{
	int a,b,c,i;
	scanf("%d%d%d",&a,&b,&c);
	if(b<=c)
	{
	    for(i=b;i<=c;i++)
		{
			printf("%d X %d = %d \n",a,i,a*i);
		}
	}
	else
	{
		for(i=c;i<=b;i++)
		{
			printf("%d X %d = %d \n",a,i,a*i);
		}
	}
	return 0;
}
