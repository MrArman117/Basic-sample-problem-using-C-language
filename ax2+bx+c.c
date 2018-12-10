#include<stdio.h>
#include<math.h>
main()
{
int a,b,c,d,e,f,g,h,n,x1,x2;
scanf("%f %f %f",&a,&b,&c);
d=b*b-4*a*c;
if(a==0&&b==0)
{
    printf("There is no Root/solution");

}
else if(a==0)
{
    e=-c/b;
    printf("%f\n",e);
}
else if(d<0)
{
    printf("There is no real roots");
}
else
{
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("%f %f",x1,x2);
}

}
