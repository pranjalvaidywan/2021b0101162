#include<stdio.h>
int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);

    return 0;
}
int main()
{   int x,z;
    printf("ENTER THE NUMBER FOR WHICH YOU WANT TO FIND FACTORIAL ");
    scanf("%d",&x);
    factorial(x);
    printf("%d",factorial(x));
    return 0;
}
