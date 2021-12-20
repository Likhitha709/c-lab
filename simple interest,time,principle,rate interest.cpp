#include<stdio.h>
#include<math.h>
main()
{
	float p,t,r,s;
	printf("enter the value for p");
	scanf("%f",&p);
	printf("enter the value for t");
	scanf("%f",&t);
	printf("enter the value for r");
	scanf("%f",&r);
	s=(p*t*r)/100;
	printf("s is %f",s);
}
