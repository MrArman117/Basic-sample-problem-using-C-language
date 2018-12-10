#include<stdio.h>
main()
{
    int id,a,b,c;
    printf("Enter your id for check which group you are:\n");
    scanf("%d",&id);
    a=id%5;
    switch(a)
    {
    case 0:
    printf("the id is A group");
    break;
    case 1:
    printf("the id is B group");
    break;
    case 2:
    printf("the id is C group");
    break;
    case 3:
    printf("the id is D group");
    break;
    case 4:
    printf("the id is E group");
    break;
    }
}
