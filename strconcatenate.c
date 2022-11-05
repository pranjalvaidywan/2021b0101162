#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str1[10];
    char str2[10];
    int i=0,j=0;
    printf("ENTER THE STRING 1");
    gets(str1);
    printf("ENTER THE STRING 2");
    gets(str2);
    while (str1[i]!='\0')
    {
        i++;
    }
    while (str2[j]!='\0')
    {
        str1[i]=str2[j];
        i=i+1;
        j=j+1;
    }
    str1[i]='\0';
    puts(str1);
}
