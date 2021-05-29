#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{ float a,b,c,D;
float root1,root2;
clrscr();
printf("enter the values of coefficients");
scanf("%f%f%f", &a,&b,&c);
D=b*b-(4*a*c);
if (D<0)
{printf("the roots are imaginary\n");}
else if(D==0)
{printf("the roots are equal");
root1=root2=b/(2*a);
printf("the root is %f", root1);}
else
{printf("the roots are real\n");
root1=((-1)*b+sqrt(D))/(2*a);
root2=((-1)*b-sqrt(D)/(2*a));
printf("the roots are %f,%f",root1, root2);}
getch();
return 0;
}

