#include<stdio.h>
#include<conio.h>
#include<math.h>
float area (float, float, float);
float area(float a, float b, float c)
{
 float s, area;
s=(a+b+c)/2.0;
area=sqrt(s*(s-a)*(s-b)*(s-c));
return area;
}

float main()
{ float  s1,s2,s3;
float t_area;
clrscr();
printf("enter the sides of triangle:");
scanf("%f %f %f", &s1,&s2,&s3);
t_area=area(s1,s2,s3);
printf("\n area of triangle=%f", t_area);
getch();
return 0.0;
}
