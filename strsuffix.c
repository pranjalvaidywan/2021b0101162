#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[10];
    printf("ENTER THE STRING ");
    gets(str);
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    for(int m=i;m>=0;m--)
    {
        printf("\n");
        for(int j=i;j>=m;j--)
        {
            printf("%c",str[j]);
        }
    }
    printf("\n");
    // FOR PREFIX
    for(int m=0;m<=i;m++)
    {
        printf("\n");
        for(int j=0;j<m;j++)
        {
            printf("%c",str[j]);
        }
    }
}
