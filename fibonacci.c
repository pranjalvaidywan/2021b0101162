#include<stdio.h>
int fibonacci(int);
int main()
{
    int n,z,i,x;
    for(i=1;i<=100;i++)
    {
        x=fibonacci(i);
        printf("  %d  %d  ",i,x);
    }
    return 0;
}
int fibonacci(int n)
{
    if (n==1)
    {
        return 0;
    }
    else
    {
        if (n==2)
        {
            return 1;
        }
        else
        {
            return fibonacci(n-1)+fibonacci(n-2);
        }
    }
    return 0;
}