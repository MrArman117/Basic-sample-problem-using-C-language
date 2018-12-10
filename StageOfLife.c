
#include<stdio.h>
main()
{
    int age;
    printf("Enter the age:\n");
    scanf("%d",&age);

    if(age>=0&&age<=3)
    {
        printf("Infancy : Vitality");
    }
    else if(age>=3&&age<=6)
    {

        printf("Early childhood : Playfulness");
    }
    else
    {
        printf("Invaild input");
    }





    return 0;
}
