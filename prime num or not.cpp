#include<stdio.h>
main()
{
	int i=1,n,count=0;
	printf("enter the number\n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		count++;
		i++;
	}
	if(count<=2)
	printf("it is a prime number\n");
	else
	printf("its not a prime number\n");
}
