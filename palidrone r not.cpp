#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("enter the n value");
	scanf("%d",&n);
	while(n>0)
	{
		i=n%10;
		sum=sum*10+i;
		n=n/10;
	}
	if(sum==n)
	{
		printf("entered number is palidrone");
	}
	else
	{
		printf("entered number is not a palidrone");
	}
}
