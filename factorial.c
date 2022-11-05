#include<stdio.h>
int factorial(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
        fact=i*fact;
    return fact;
}
int main()
{
    int n;
    printf("ENTER THE NUMBER ");
    scanf("%d",&n);
    printf("%d",factorial(n));
}