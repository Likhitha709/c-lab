#include<stdio.h>
int fact(int);
main()
{
	int a,b,z; 
	printf("enter first number\n");
	scanf("%d",&a);
	printf("enter second number\n");
	scanf("%d",&b);
	z=a;
	a=b;
	b=z;
	printf("first number:%d\n",a);
	printf("second number:%d",b);
}
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
