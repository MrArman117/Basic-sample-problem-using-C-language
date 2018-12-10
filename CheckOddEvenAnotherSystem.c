#include<stdio.h>
int main()
{
	int a;
	printf("enter any value for check odd/even: ");
	scanf("%d",&a);
	(a%2==0)?
	printf("\nthe value you entered is even"):
    printf("\nthe value you enterd is odd");
	return(0);
}
