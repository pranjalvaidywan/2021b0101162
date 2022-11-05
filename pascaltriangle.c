#include <stdio.h>
int main()
{
    int a[5][6]={0};
    a[0][0]=1;
    int i,j,k;
    for(i=1;i<5;i++)
    {
        for(k=5;k>i;k--)
        {
            printf(" ");
        }
        for(j=1;j<6;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
            if(a[i][j]==0){
                continue;
            }
            else{
            printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
}