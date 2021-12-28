#include<stdio.h>
main()
{
	int i=1,n,sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	while(i<n)
	{
		n=n%10;
		sum=sum+i;
		i++;
	}
	if(sum==n)
	{
		printf("entered number is perfect");
	}
	else
	{
		printf("entered number is not a perfect number");
	}
}
