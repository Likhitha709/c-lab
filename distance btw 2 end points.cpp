#include<stdio.h>
#include<math.h>
main()
{
	int x1,x2,y1,y2,x,y;
	float a;
	printf("enter the value for x1,x2");
	scanf("%d%d",&x1,&x2);
	printf("enter the value for y1,y2");
	scanf("%d%d",&y1,&y2);
	x=(x2-x1)*(x2-x1);
	y=(y2-y1)*(y2-y1);
	a=sqrt(x+y);
	printf("distance between 2 end points is %f",a);
}
