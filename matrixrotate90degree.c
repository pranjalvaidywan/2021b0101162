#include<stdio.h>
void main()
{
    int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int b[4][4];
    int i,j,r,rowfix,temp;
    for(i=0;i<4;i++)
    {
        printf("\n");
        for(j=0;j<4;j++)
        {
            printf("%d    \t",a[i][j]);
        }
    }
    // FOR TRANSPOSE OF THE MATRIX GIVEN
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("\n\n");
    for(i=0;i<4;i++)
    {
        printf("\n");
        for(j=0;j<4;j++)
        {
            printf("%d    \t",b[i][j]);
        }
    }
    // FOR THE ROTATION BY 90 DEGREE CLOCKWISE
    for(r=0;r<4;r++)
    {
        rowfix=r;
        i=0;
        j=3;
        while(i<j)
        {
            temp=b[rowfix][i];
            b[rowfix][i]=b[rowfix][j];
            b[rowfix][j]=temp;
            i=i+1;
            j=j-1;

        }
    }
    printf("\n\n");
    printf("AFTER ROTATION BY 90 DEGREE ");
    printf("\n\n");
    for(i=0;i<4;i++)
    {
        printf("\n");
        for(j=0;j<4;j++)
        {
            printf("%d    \t",b[i][j]);
        }
    }

}