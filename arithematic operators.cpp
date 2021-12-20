#include<stdio.h>
main()
{
	int a,b,x;
	char op;
	printf("enter the value for a");
	scanf("%d",&a);
	printf("enter the value for b");
	scanf("%d",&b);
	printf("enter any operator");
	scanf("%c",&x);
	switch(op)
	{
		case'+':x=a+b;
		printf("%d",x);
		break;
		case'-':x=a-b;
		printf("%d",x);
		break;
		case'/':x=a/b;
		printf("%d",x);
		break;
		case'%':x=a%b;
		printf("%d",x);
		break;
		case'*':x=a*b;
		printf("%d",x);
		break;
		default:printf("entered wwrong input");
	}
	}
