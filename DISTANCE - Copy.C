#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
float x1,x2,y1,y2,d ;
clrscr();
printf("\n Enter value of x1 and y1:");
scanf("%f %f", &x1, &y1);
printf("\n Enter value of x2 and y2:");
scanf("%f %f", &x2, &y2);
d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
printf ("\n distance=%f",d);
getch();
return 0;
}