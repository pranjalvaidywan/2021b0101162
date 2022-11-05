#include<stdio.h>
int main()
{
    int n;
    float z=0;
    for (n=1;n<5;n++)
        z=z+(1.0/n);
    printf("%f",z);
}