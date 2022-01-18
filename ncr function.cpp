#include<stdio.h>
int factorial(int a);
int main()
{
	int k,ncr,n,r,nfact,rfact,g,fact=1;
	printf("read n value");
	scanf("%d",&n);
	nfact=factorial(n);
	printf("read r value");
	scanf("%d",&r);
	rfact=factorial(r);
	g=factorial(n-r);
	ncr=nfact/(g*rfact);
	printf("ncr value is %d",ncr);
}
int factorial(int a)
{
	int fact=1,i;
	for (i=1;i<=a;i++)
	fact=fact*i;
	return fact;
}
