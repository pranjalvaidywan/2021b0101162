#include<stdio.h>
int mergearray(int a[],int low,int mid, int high)
{
    int i=low;
    int j=mid+1;
    int k=low;
    int z;
    int c[101]={0};
    while(i<=mid && j<=high)
    {
        if (a[i]<a[j])
        {
            c[k]=a[i];
            i=i+1;
            j=j+1;
        }
        else{
            c[k]=a[j];
            j=j+1;
            k=k+1;
        }
    while(i<=mid)
    {
        c[k]=a[i];
        i=i+1;
        k=k+1;
    }
    while(j<=high)
    {
        c[k]=a[j];
        j=j+1;
        k=k+1;
    }
    }    
}
int mergesort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        mergearray(a,low,mid,high);
        
        
        
    }

}

int main()
{
    int a[8]={30,15,5,20,2,10,6,18};
    int low=0;
    int high=7;
    mergesort(a,low,high);
    printf("%d",)
}