#include<stdio.h>
main()
{
    float a,b,c,d,e,f,g,total,discount;
    printf("enter the 1st price :\n");
    scanf("%f",&a);
    printf("enter the 2nd price :\n");
    scanf("%f",&b);
    printf("enter the 3rd price :\n");
    scanf("%f",&c);
    total=a+b+c;
    printf("your total prize is %f Taka\n",total);
    discount=total/2;
    printf("after 50 percent discount you have to pay %f Taka\n",discount);
    printf("Thank you");

    return 0;
}
