#include<stdio.h>
main()
{

int a,b,c,d,e,f,g,h,i;
printf("Enter Three integer value for check reversing number:\n ");

scanf("%d",&b);

a=b%10;

c=a*100;

d=b/10;

e=d%10;

f=e*10;

g=d/10;

h=c+f+g;

printf("%d",h);

return 0;

}
