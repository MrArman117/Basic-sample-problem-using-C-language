
#include<stdio.h>
main()
{

    int number;

printf("Please input (40-100) marks for show the Grade\n");

    scanf("%d",&number);

    if (number>=40&&number<=44)
    {
        printf("you get D grade");
    }
else if(number>=45&&number<=49)
{
    printf("you get C Grade");
}
else if(number>=50&&number<=54)
{
    printf("you get C+ Grade");
}
else if(number>=55&&number<=59)
{
    printf("you get B- grade");
}
else
{
printf("pls input(1-7)value!!");/*fully not completed*/
}

return 0;

}
