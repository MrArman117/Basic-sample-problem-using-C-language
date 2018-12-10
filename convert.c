#include<stdio.h>
main()
{
	int a,b,c,d;

	scanf("%d%d",&a,&b);

	c=(a*a)+2*a*b+(b*b);

	d=(a*a)-2*a*b+(b*b);

	printf("%d %d",c,d);

return 0;
}
