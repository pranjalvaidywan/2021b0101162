#include<stdio.h>
int main()
{
    int a[5][5]={0};
    a[0][2]=1;
    int c=0,r=0,tr=0,tc=2;
    int n=1;
    int i,j;
    while(n!=25)
    {
        tr=tr-1;
        if(tr<0)
            tr=4;
        tc=tc+1;
        if(tc>4)
            tc=0;
        n=n+1;
        r=tr;
        c=tc;
        if(a[tr][tc]==0)
        {
            a[tr][tc]=n;
            r=tr;
            c=tc;
        }
        else
        {
            r=r+1;
            a[r][c]=n;
            tr=r;
            tc=c;
        }
    return 0;
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            printf("%d",a[i][j]);
        printf("\n");
    }

}