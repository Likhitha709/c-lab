#include<stdio.h>
main()
{
	int a,b,n,i;
	printf("enter the value of n");
	scanf("%d",&n);
	i=0;
	while(i<=n && i%2==0)
	{
		printf("even numbers are %d\n",i);
		i=i+2;
	}
	i=1;
	while(i<=n)
	{
		printf("odd numbers are %d\n",i);
		i=i+2;
	}
}
