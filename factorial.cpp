#include<stdio.h>
main()
{
	int n,i,f;
	f=i=1;
	printf("enter a number to find factorial");
	scanf("%d",&n);
	while(i<=n)
	{
		f*=i;
		i++;
	}
	printf("the factorial of %d is %d",n,f);
}
