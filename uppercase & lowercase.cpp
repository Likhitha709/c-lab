#include<stdio.h>
main()
{
	char ch;
	printf("enter the character");
	scanf("%c",&ch);
	switch(ch>='a'&& ch<='z' || ch>='A'&& ch<='Z')
	{
		case 1:
			printf("character");
			break;
	    case 0:
		switch(ch>=1 && ch<=9)
{
	case 1:
		printf("number");
		break;
		default:printf("special character");
		break;
	}
}
}

