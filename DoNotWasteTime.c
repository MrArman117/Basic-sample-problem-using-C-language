

#include<stdio.h>
main()
{
    int a,b,c,d,e,hours,minutes,second;

printf("Enter the value of second for convert this minute,hour equivalent:\n");

    scanf("%d",&second);

        hours=second/3600;
        a=second%3600;
        minutes=a/60;
        second=a%60;
        printf("%d hour %d minute %d second",hours,minutes,second);


}
