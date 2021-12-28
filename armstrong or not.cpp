#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("enter the n value");
	scanf("%d",&n);
	while(i>0)
	{
		i=n%10;
		sum=+i*i*i;
		n=n/10;
	}
	if(sum==n)
	{
		printf("entered number is armstrong");
	}
	else
	{
		printf("entered number is not a armstrong");
	}
}
