#include <stdio.h>
int main()
{
    int x=3,n,p=1,sign=1;
    float sum,f=1;
    for(n=1;n<=5;n++)
    {
        
        p=p*x;
        f=f*n;
        sum=sum+(p/f)*sign;
        sign=sign*(-1);
    }
    printf("%f",sum);


}