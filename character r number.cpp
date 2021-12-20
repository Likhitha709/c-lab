#include<stdio.h>
main()
{
	int x;
	printf("enter any number");
	scanf("%d",&x);
	switch(x>='0'&& x<='9')
	{
		case 1:printf("entered character is number");
		break;
		case 0:printf("entered character is character");
		break;
	}
	char a;
	printf("enter any character");
	scanf("%c",&a);
	switch(a>='a'&& a<='z'|| a>='A'&& a<='Z')
	{
		case 1:printf("entered character is character");
		break;
	    case 0:printf("entered character is number");
	    break;
	
}
}
	
