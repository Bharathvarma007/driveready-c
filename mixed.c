#include<stdio.h>
void mixed(int n)//---->123
{
	int r,s;
	if(n%2)
	{
	
	while(n)
	{
		r=n%10;
		n=n/10; 
		if(r%2==0)
		{
			printf("oddmixed");
		}
		/*else
		{
			printf("odd");
		}*/
	}
	
	}
	else
	{
	while(n)
	{
		
		r=n%10;
		n=n/10;
		if(r%2!=0)
		{
			printf("evenmixed");
		}
		/*else
		{
			printf("even");
		}*/
	}
	}

}
int main()
{
	int num;
	scanf("%d",&num);//----->123
	mixed(num);
}
