#include<stdio.h>
main()
{
	int i=1,n,a;
	printf("enter the n value");
	scanf("%d",&n);
	while(i<=20)
	{
		a=n*i;
		printf("%d*%d = %d\n",n,i,a);
		i++;
	}
}
