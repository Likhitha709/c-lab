#include<stdio.h>
main()
{
	int radius,area,perimeter;
	printf("enter the value of radius");
	scanf("%d",&radius);
	area=3.14*radius*radius;
	printf("area of circle is %d",area);
	perimeter=2*3.14*radius;
	printf("perimeter of circle is %d",perimeter);
}
