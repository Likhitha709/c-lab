#include<stdio.h>
main()
{
	int a,k;
	printf("enter the value for a");
	scanf("%d",&a);
	switch(k=a%2)
	{
		case 1:printf("user entered is even");
		break;
		case 0:printf("user entered is odd");
		break;
	}
}
