#include<stdio.h>
#include<conio.h>
float average(float,float, float);
float average(float a, float b, float c)
{
float average;
average=(a+b+c)/3;
return average;}
float main()
{
float a,b,c,A;
clrscr();
printf("enter 3 numbers:",a,b,c);
scanf("%f %f %f", &a,&b,&c);
A=average(a,b,c);
printf("\n average=%f" , A);
getch();
return 0.0;
}
