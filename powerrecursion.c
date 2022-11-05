#include<stdio.h>
// EITHER DEFINE FUNCTION ABOVE THE MAIN FUNCTION OR GIVE ITS PARAMETERS VALUE AND 
// DEFINE ITS SUB FUNCTION
int power(int,int);
int main()
{
    int n,p;
    printf("ENTER THE NUMBER ");
    scanf("%d",&n);
    printf("ENTER THE POWER ");
    scanf("%d",&p);
    printf("%d",power(n,p));
    return 0;

}
int power(int n,int p)
{
    if (p==0)
        return 1;
    else
        return n*power(n,p-1);

    return 0;
}