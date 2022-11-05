#include<stdio.h>
int main()
{
    // INITIALIZE THE ARRAY OF SIZE 5
    int A[5];
    int i,x=0,max=0,min;
    for (i=0;i<=4;i++)
        {
        // TAKING VALUE FOR ARRAY FROM USER
        scanf("%d",&A[i]);
        // ALOT THE FIRST ENTERED VALUE BY USER AS THE MINIMUM
        min=A[0];
        // SUM OF THE ENTRIES BY USER IN THE ARRAY
        x=x+A[i];
        // CONDITION FOR MAXIMUM VALUE IN ARRAY
        if(A[i]>max)
            max=A[i];
        // CONDITION FOR MINIMUM VALUE IN ARRAY
        if(A[i]<min)
            min=A[i];
        }
    
    printf("THIS IS THE SUM OF ARRAY %d \n",x);
    printf("THIS IS THE MAXIMUM ELEMENT %d \n",max);
    printf("THIS IS THE MINIMUM ELEMENT %d \n",min);
    return 0;
}