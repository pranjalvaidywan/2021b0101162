#include<stdio.h>
float vol(int r)
{
    float b=(4/3.0)*(3.14)*r*r*r;
    return b;

}
int main()
{
    int r;
    printf("ENTER THE RADIUS OF SPHERE");
    scanf("%f",r);
    printf("%d",vol(r));
}