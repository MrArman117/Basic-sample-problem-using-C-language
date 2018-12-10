#include<stdio.h>
main()
{
    int a,b,c,d,e;
    printf("Enter any Value for check how many year,month & days\n");
    scanf("%d",&a);
    b=a/365;
    c=a%365;
    d=c/30;
    e=d%30;
    printf("The value you enter is, %d Year %d Month %d Days",b,d,e);

}
