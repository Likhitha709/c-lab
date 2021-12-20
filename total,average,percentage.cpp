#include<stdio.h>
main()
{ int a,b,c,d,e;
float total,average,percentage;
printf("enter the value for a");
scanf("%d",&a);
printf("enter the value for b");
scanf("%d",&b);
printf("enter the value for c");
scanf("%d",&c);
printf("enter the value for d");
scanf("%d",&d);
printf("enter the value for e");
scanf("%d",&e);
total=a+b+c+d+e;
printf("total value is %f\n",total);
average=total/5;
printf("average value is %f\n",average);
percentage=(total/500)*100;
printf("percentage value is %f\n",percentage);
}
