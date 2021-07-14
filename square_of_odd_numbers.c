#include <stdio.h>
int main()
{
int i,n,m,sum;
sum=0;
m=1;
printf (“the value of n”);
scanf (“%d”, &n);
for(i=1; i<=n ; i+=1)
{
    sum=sum+(m*m);
    
    m=m+2;
    
}

        
printf(“sum=%d”, sum);
       return 0;
}
