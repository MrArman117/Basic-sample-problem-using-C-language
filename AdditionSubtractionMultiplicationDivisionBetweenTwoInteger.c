#include<stdio.h>
main()
{
 int a,b,c,W,X,Y,Z;
 printf("Enter two integer : \n");
 scanf("%d %d",&a,&b);
 printf("Press 1 for calculated  Addition:\nPress 2 for calculated  Subtraction:\n");
 printf("Press 3 for calculated  Multiplication:\nPress 4 for calculated  Division:\n ");
 scanf("%d",&c);
 switch(c)
 {
case 1:
     X=a+b;
     printf("The two integer  Addition is %d \n",X);
  break;
 case 2:
    X=a-b;
    printf("The two integer  Subtraction is %d",X);
    break;
 case 3:
    Y=a*b;\
    printf("The two integer Multiplication is %d",Y);
    break;
 case 4:
     Z=a/b;
    printf("The two integer Division is %d",Z);
    break;

 }
}
