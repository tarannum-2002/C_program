
#include<stdio.h>
#include<conio.h>
int main()
{
int m,n;
clrscr();
printf("give the values of m and n");
scanf("%d %d", &m,&n);
if (m%2==0)
    m=m;
else
    m=m+1;
while(m<=n)
    {
     printf(" %d", m);
     m=m+2;
     }
getch();
return 0;
}
