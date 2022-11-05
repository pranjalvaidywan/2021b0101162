#include <stdio.h>
#define true 1
#define false 0
int prcd(char a,char b)
{
    if ( a=='*' || a=='^'|| a=='*' || a=='/' || a=='%')
    {
        if (b=='^')
        {
            return false;
        }
    }
    else
    {
        if (b=='+'|| b=='-')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    char a,b;
    printf("ENTER THE OPRAND 1 ");
    scanf("%c",&a);
    printf("ENTER THE OPRAND 2 ");
    scanf("%c",&b);
    printf("%d",prcd(a,b));
    return 0;
}