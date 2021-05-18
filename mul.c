#include <stdio.h>
int is_odd_even_wave(int num)
{
	int d,r;
	d=num%10;//-------------->4
	num=num/10;//---------->123
	while(num)
	{
		r=num%10;//---------->3
		num=num/10;//-------->12
		if((d%2==0 && r%2==0) || (d%2!=0 && r%2!=0))
		{
			return 0;
		}
		else
		{
			d=r;
		}
	}
	return 1;
}
int main() 
{
    int a,num,i;
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
	scanf("%d",&num);s
	if(is_odd_even_wave(num))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	}
    
    
    return 0;
}
