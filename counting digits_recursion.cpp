#include<stdio.h>
int countthedigits(int num)
{
	static int c=0;
	if(num>0)
	{
		c++;
		countthedigits(num/10);
	}
	else
	{
		return c;
	}
}
int main()
{
	int n;
	int c=0;
	printf("enter number");
	scanf("%d",&n);
	c=countthedigits(n);
	printf("total digits in number %d is %d\n",n,c);
}
