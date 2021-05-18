#include<stdio.h>
void add(int m,int n)
{
	int b;
	b=(m+n);
	printf("%d\n",b);
}
int main()
{
	int a,num1,num2,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		scanf("%d%d",&num1,&num2);
		add(num1,num2);
	}
	return 0;
}
