#include<stdio.h>
main()
{ int a,b,c;
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
if(a>=b){
    a=a-b;
}
c=a;
printf("value of c is %d",c);
}

