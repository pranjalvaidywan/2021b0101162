#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int partition(int A[], int low, int high)
{
    int i,j,pivot,temp;
    i=low;
    j=high+1;
    srand(time(NULL));
    int random=rand()%low + (high - low);
    temp=A[low];
    A[low]=A[random];
    A[random]=temp;
    pivot=A[low];
    do
    {
            do
            {
                i=i+1;
            } while (A[i]<pivot);
            do
            {
                j=j-1;
            } while (A[j]>pivot);
        if (i<j)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
                
            
    } while (i<j);
    temp=A[low];
    A[low]=A[j];
    A[j]=temp;
    return j;

    
}
void quicksort(int A[],int low, int high)
{
    int j;
    if(low<high)
    {
        int j=partition(A,low,high);
        quicksort(A,low,j-1);
        quicksort(A,j+1,high);
    }
}
int main()
{
    int i;
    int low=0;
    int high=8;
    int A[10]={200,160,300,400,90,100,70,350,250};
    A[high+1]=__INT_MAX__;
    quicksort(A,low,high);
    for(i=0;i<9;i++)
        printf("    %d",A[i]);
}