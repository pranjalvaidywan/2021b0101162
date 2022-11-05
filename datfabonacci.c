#include<stdio.h>
int dat[1001]={0};
int fibonacci(int n)
{
    int dat[1001]={0};
    if(n==1)
        dat[1]=0;
    else
    {
        if(n==2)
            dat[2]=1;
        else
        {
            if(dat[n]==0)
                dat[n]=fibonacci(n-1)+fibonacci(n-2);
        }
    }
    return dat[n];
}
int main()
{
    int x,i;
    for(i=1;i<=100;i++)
    {
        x=fibonacci(i);
        printf("  %d  %d  ",i,x);
    }
}