#include<stdio.h>
//USE THIS FOR TAKING AN SPACE IN THE INPUT
#include<string.h>
int main()
{
    char name[20];
    char t;
    // For taking spaces in the entry
    gets(name);
    puts(name);
    // To get the length of the entered string.Find for the null element.
    int i=0;
    while(name[i]!='\0')
        i=i+1;
    printf("%d",i);
    // To bring the i index to the given value or to remove from the null value.
    i=i-1;
    // This is to reverse the Entry
    /*int j=0;
    while(j<i)
    {
        t=name[i];
        name[i]=name[j];
        name[j]=t;
        j=j+1;
        i=i-1;
    }
    printf("%s",name);*/
    // To check for Palindrome
    int k=0,flag=0;
    while (k<i)
    {
        if(name[k]!=name[i])
            flag=1;
            break;
            k=k+1;
            i=i-1;
    }
    if(flag==1)
        printf("not palindrome");
    else
        printf("palindrome");
}