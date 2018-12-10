#include<stdio.h>
main()
{
    int a,b,roll;
    printf("Enter Your Id/Roll: ");
    scanf("%d",&roll);
    a=roll%5;

    if(a==0)
    {
        printf("you are in group A");
    }
    else if(a==1)
    {
        printf("You are in group B");
    }
    else if(a==2)
    {
    printf("You are in  group c");
    }
    else if(a==3)
    {
    printf("you are in group D");
    }
    else if(a==4)
    {
    printf("you are in group E");
    }
    else
    {
    printf("Invaild input\Please enter positive number");
    }

}
