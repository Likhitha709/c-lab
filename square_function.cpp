#include<stdio.h>
main()
{
	int n,s;
	printf("enter a number\n");
	scanf("%d",&n);
	s=n*n;
	printf("square of given number %2f=%2f\n",n,s);
}
int square(int n)
{
	int i,s=1;
	for(i=1;i<=n;i++)
	{
		s=n*n;
		
	}
	return s;
}
