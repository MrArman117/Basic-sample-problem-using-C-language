#include<stdio.h>
main()
{
    int a,b,c,d,e,f,g,h;

    a=h;
    b=++a;
    b=a++;
    c=a--;
    ++a;
    d=--a;
    ++a;
    scanf("%d %d %d",&d,&a++,&--a);
    printf("d=%d a++=%d --a=%d",d,a++,--a);
}
