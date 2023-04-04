#include <stdio.h>

main()
{
int a,b,c;
	printf("enter the number\n");
	scanf("%d %d %d", &a,&b,&c);
   a=a+b+c;
   b=a-(b+c);
   c=a-(b+c);
   a=a-(b+c);
	printf("swap no is %d %d %d ",a,b,c);
	
}
     
