#include<stdio.h>
main()
{
	int i=1,sum=0,n,k,avg;
	printf("enter how many numbers average");
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d",&k);
		sum=sum+k;
		i++;
	}
	printf("sum is %d",sum);
	avg=(float)(sum/n);
	printf("average is %d",avg);
}
