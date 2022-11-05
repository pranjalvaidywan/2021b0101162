#include <stdio.h>

int main()
{
    // TAKING A LARGE SIZE ARRAY FOR EDITING PURPOSE

    int A[100]= { 0 };
    int i,pos=0,n=5;

    // INITIALIZE ARRAY OF SIZE 5

    printf("ENTER THE ELEMENTS OF THE ARRAY \n");
    for (i=0;i<n;i++)
        scanf("%d",&A[i]);

    // PRINT THE ORIGINAL ARRAY

    printf("THE ARRAY IS ");
    for (i=0;i<n;i++)
        printf("%d ",A[i]);
    printf("\n");

    // TAKE THE INPUT OF POSITION FROM USER TO REMOVE FROM ARRAY

    printf("ENTER THE POSITION OF THE ELEMENT TO BE REMOVED FROM ARRAY \n");
    scanf("%d",&pos);

    // DECREASE THE SIZE OF ARRAY

    n=n-1;

    // SHIFTING OF ARRAY BACKWARD 
    
    for (i=pos-1;i<=n;i++)
        A[i]=A[i+1];

    // PRINT THE UPDATED ARRAY

    for (i=0;i<n;i++)
        printf("%d ",A[i]);
}