#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
float f,c;
printf("\n enter the value of fahrenheit:");
scanf("%f",&f);
c=(f-32)*(5/9);
printf("\n the value of C is: %f",c);
getch();
return 0;
}