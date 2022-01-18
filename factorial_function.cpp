#include<stdio.h>
int fact(int);
main()
{
	int p,a;
	printf("enter a number\n");
	scanf("%d",&p);
	a=fact(p);
	printf("factorial of %d=%d\n",p,a);
}
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
