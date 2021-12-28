#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	while(n>0)
	{
		i=n%10;
		sum=0+i;
		n=n/10;
		printf("%d",sum);
	}
	
}
