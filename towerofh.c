#include<stdio.h>
void toh(int n,char s,char m,char d)
{
    if(n==1)
        printf("%c-->%c\n",s,d);
    else
    {
        toh(n-1,s,d,m);
        printf("%c-->%c\n",s,d);
        toh(n-1,m,s,d);
    }
}
int main()
{
    toh(3,'s','m','d');
    return 0;
}