#include<stdio.h>
int main()
{
    int sign=1;
    int n;
    float z=0;
    for (n=1;n<5;n++)
    {
        z=z+(1.0/n)*sign;
        sign=sign*(-1);
    }
    printf("%f",z);
}