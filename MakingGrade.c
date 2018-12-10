#include "stdio.h"
main()
{
int a,c,m,f,g,h,i;
printf("Please Enter the marks as Individually attendance,clsstest,midterm,finalterm:\n ");
scanf("%d %d %d %d",&a,&c,&m,&f);

if(a<0||a>10)
    {
    printf("\nInvalid Attendence Mark Range [Plz Enter the Marks Range (Attendance) (0-10)]\n");
    }
if(c<0||c>20)
    {
    printf("\nInvalid Class Test Mark Range [Plz Enter the Marks Range (Class Test) (0-20)]\n");
    }
if(m<0||m>30)
{
    printf("\nInvalid Mid Term Marks Range [Plz Enter the Marks Range (Mid Term) (0-30)]\n");
}
if(f<0||f>40)
{
    printf("\nInvalid Final Term Marks Range [Plz Enter the Marks Range (Final Term) (0-40)]\n");
}
if(a>=0&&a<=10&&c>=0&&c<=20&&m>=0&&m<=30&&f>=0&&f<40)

    g=a+c+m+f;

else if(g>=0&&g<=39)
{
    printf("Your Result is 'F' Grade");
}
else if(g>=40&&g<=44)
{
    printf("Your Result is 'D' Grade");
}
else if(g>=45&&g<=49)
{
    printf("Your Result is 'C' Grade");
}
else if(g>=50&&g<=54)
{
    printf("Your Result is 'C+' Grade");
}
else if (g>=55&&g<=59)
{
    printf("Your Result is 'B-' Grade");
}
else if(g>=60&&g<=64)
{
    printf("Your Result is 'B' Grade");
}
else if(g>=65&&g<=69)
{
    printf("Your Result is 'B+' Grade");
}
else if(g>=70&&g<=74)
{
    printf("Your Result is 'A-' Grade");
}

else if(g>=75&&g<=79)
{
    printf("Your Result is 'A' Grade");
}
else if(g>=80&&g<=100)
{
    printf("Your Result is 'A+' Grade");
}
else
{
    printf("Invaild Input");
}

}
