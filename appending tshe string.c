/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char str1[1000], str2[1000];
    int i=0, j=0, len;
    printf("the first string \t");
    gets(str1);
    printf("the second string \t");
    gets(str2);
    while( str2[i] != '\0')
    {
        i++;
    }
    while( str1[j] != '\0')
    {
        str2[i]=str1[j];
        i++;
        j++;
        
    
    }
    len=i;
    printf("\n the string and length is \t ");
    puts(str2);
    getch();
    printf("\n the length is %d", len);
    
    
}

