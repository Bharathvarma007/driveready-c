#include<stdio.h>
void great(int n)
{
int r,i=0;
while(n)
{
r=n%10;
n=n/10;
if(r>i)
{
i=r;
}
}
printf("%d",i);
}

int main()
{
int a;
scanf("%d",&a);
great(a);
return 0;
}
