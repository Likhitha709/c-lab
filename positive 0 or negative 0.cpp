#include<stdio.h>
main()
{
	int a;
	printf("enter the value for a");
	scanf("%d",&a);
	if(a>0)
	{
		printf("given number is positive");
	}
	else if(a<0)
	{
		printf("given number is negative");
	}
	else 
	{
		printf("given number is 0");
	}
}

