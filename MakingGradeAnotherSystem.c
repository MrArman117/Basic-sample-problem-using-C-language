#include<stdio.h>
#include<conio.h>
int main()
{
	int x1,x2,x3,x4,x5;
	float avg,point;
	printf("X1:");
	scanf("%d",&x1);
	printf("X2:");
	scanf("%d",&x2);
	printf("X3:");
	scanf("%d",&x3);
	printf("X4:");
	scanf("%d",&x4);
	printf("X5:");
	scanf("%d",&x5);
	avg=(x1+x2+x3+x4+x5)/5;
	if(avg>=80)
	point=5.00;
	else if(avg>=70)
	point=4.00;
	else if(avg>=60)
	point=3.50;
	else if(avg>=50)
	point=3.00;
	else if(avg>=40)
	point=2.00;
	else (point=0.00);
	printf("the point is=%f",point);
	return(0);
}
