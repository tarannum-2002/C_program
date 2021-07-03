/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
int a[3][3], b[3][3],c[3][3], i, j ;
printf("the first matrix\n");
for (i=0; i<3; i++)
{
    for (j=0; j<3; j++)
    {
       scanf("%d", &a[i][j]);
    }
    printf("\n");
}
printf("the second matrix\n");
for (i=0; i<3; i++)
{
    for (j=0; j<3; j++)
    {
       scanf("%d", &b[i][j]);
    }
    printf("\n");
}

for (i=0; i<3; i++)
{
    for (j=0; j<3; j++)
    {
       c[i][j]= a[i][j]+ b[i][j];
    }
}
printf("the third matrix\n");
for (i=0; i<3; i++)
{
    for (j=0; j<3; j++)
    {
       printf("\t %d", c[i][j]); 
    }
    printf("\n");
}
    return 0;
}
