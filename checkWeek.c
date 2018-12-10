#include<stdio.h>
main()
{

    int a,b,c,d,e,f,g;

printf("Please input (1-7) value\n");

    scanf("%d",&a);

    if (a==1)
    {
        printf("Saturday");
    }
else if(a==2)
{
    printf("sunday");
}
else if(a==3)
{
    printf("Monday");
}
else if(a==4)
{
    printf("Tuesday");
}
else if(a==5)
{
    printf("Wednesday");
}
else if(a==6)
{
    printf("Thursday");
}
else if(a==7)
{
    printf("Friday");
}
else
{
printf("pls input(1-7)value!!");
}

return 0;

}
