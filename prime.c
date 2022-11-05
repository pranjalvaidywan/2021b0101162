#include<stdio.h>
int prime(int n)
{
    int flag=0;
    int i,dat[100]={0};
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            dat[i]=1;
        }
        break;
    }
    if (flag==0)
        printf("%d",n);
}
int main()
{
    int p,z;
    printf("ENTER THE NUMBER TO CHECK WHETHER PRIME OR NOT ");
    scanf("%d",&p);
    printf("%d",prime(p));

}





/*
#include<stdio.h>
int fibonacci(int n)
{
    int dat[101]={0};
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
    int n=40;
    printf("%d",fibonacci(n));
    
}
*/