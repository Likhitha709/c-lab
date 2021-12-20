#include<stdio.h>
main()
{
	int a,b;
	printf("enter the value for a");
	scanf("%d",&a);
	printf("enter the value for b");
	scanf("%d",&b);
	if(a>b)
	{
		printf("%d is greater than %d",a,b);
	}
else
{
	printf("%d is greater than %d",b,a);
	
}
}
