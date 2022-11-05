#include<stdio.h>
int sum(int n)
{
    int sum=0,i;
    for(i=1;i<=n;i++)
        sum=sum+i;
    return sum;
}
int main()
{
    int n;
    printf("ENTER THE NUMBER ");
    scanf("%d",&n);
    printf("%d",sum(n));
}