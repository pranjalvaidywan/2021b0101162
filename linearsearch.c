#include<stdio.h>
int linearsearch(int[],int,int);
int main()
{
    int A[100]={0};
    int n,j,searchelement;
    printf("ENTER THE NUMBER OF ELEMENTS FOR THE ARRAY ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENT TO BE SEARCHED ");
    scanf("%d",&searchelement);
    for (j=0;j<n;j++)
        scanf("%d",&A[j]);
    linearsearch(A,n,searchelement);
    return 0;
    
}
int linearsearch(int a[],int n,int searchelement)
{
    int i;
    for (i=0;i<n;i++)
        if (a[i]==searchelement)
            printf("FOUND THE ELEMENT AT %d",i+1);
}