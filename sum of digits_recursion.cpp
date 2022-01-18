#include<stdio.h>
int sum(int n);
int main()
{
	int n,s;
	printf("enter any number");
	scanf("%d",&n);
	s=sum(n);
	printf("sum of digits of %d=%d",n,s);
	return 0;
}
int sum(int n)
{
	if(n==0)
	return 0;
	return((n%10)+sum(n/10));
}
