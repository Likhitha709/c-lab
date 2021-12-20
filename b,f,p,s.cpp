#include<stdio.h>
main()
{
	char c;
	printf("b for burger/n f for frenchfries/n p for pizza/n s for sandwich/n");
	scanf("%c",&c);
	switch(c)
	{
		case'b':printf("bill is 200");
		break;
		case'f':printf("bill is 50");
		break;
		case'p':printf("bill is 500");
		break;
		case's':printf("bill is 150");
		break;
		default:printf("out of stock");
	}
}
