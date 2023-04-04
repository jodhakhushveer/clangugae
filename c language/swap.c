#include <stdio.h>

main()
{
int t,a,b;
	printf("enter the number\n");
	scanf("%d %d",&a,&b);
t=b;
b=a;
a=t;
	printf("swap no is %d %d",a,b);
	
}
