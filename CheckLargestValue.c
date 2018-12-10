int age;
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter Three value and see which is the largest value: ");
	scanf("%f %f %f",&a,&b,&c);
	if(a>=c)
	  {
	  	if(a>=b)
	  	printf(" Largest number is a=%.2f",a);
	  	else
	  	       printf("Largest number is b=%.2f",b);
	  }

	   else if(b>=c)
	   printf("Largest number is b=%.2f",b);
	   else
	   printf("Lergest Number c=%.2f",c);
	   return(0);
}
