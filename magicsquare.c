// MAGIC SQUARE ALWAYS CONSISTS OF ODD NUMBER OF ROWS AND COLUMNS
#include <stdio.h>
int main()
{
    int a[5][5]={0};
    int i,j;
    a[1][2]=1;
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {   int x=1,y=2;
            if(a[x-1][y+1]==0)
            {
                a[x-1][y+1]=a[x][y]+1;
            }
    
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}