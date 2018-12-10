#include<stdio.h>
main()
{
    int a,b,c,d,e,f,g,h,i;
    printf(" Enter three digit number : ");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    d=c%10;
    e=c/10;
    f=b+d+e;
    printf("The summation of three digit equal to %d",f);

}
