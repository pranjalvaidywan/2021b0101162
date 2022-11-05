#include<stdio.h>
int main()
{
    int a[4][5]={0};
    int i=2,j=3,x;
    printf("%u ",a);
    printf("%u ",&a[2][3]);
    x=(i-0)*(4-0+1)+(j-0)*(5-0+1);
    printf("%u",a+x);
    return 0;

    
}