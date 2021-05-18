#include<stdio.h>
int reverse(int n)
{
	int r,rev=0;
	while(n)
	{
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	return rev;
}
int main()
{
	int num,rev;
	scanf("%d",&num);
	rev=reverse(num);
	printf("%d",&rev);
	return 0;
}
