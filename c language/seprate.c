#include<stdio.h>
main()
{
int  n,a,c,b,d;
printf("seprate the two number\n");
scanf("%d" ,&n);
a=n%10;
b=n/10;
c=b%10;
d=b/10;
printf ("sepate number is%d %d %d",d,c,a);
}
