#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[20];
    int flag=0;
    printf("ENTER THE VARIABLE NAME TO CHECK VALIDITY ");
    gets(str);
    int i;
    if ( str[0]=='_' || (str[0]>='a' && str[0]<='z') || (str[0]>='A' && str[0]<='Z'))
    {
        i=1;
        while(str[i]!='\0')
        {
            if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || str[i]=='_' || (str[i]>='0' && str[i]<='9') || str[i]=='$')
            {
                i++;
            }
            else
            {
                flag=1;
                break;
            }
        }
    }
    else
    {
        flag=1;
    }
    if(flag==0)
        printf("ENTERED VARIABLE NAME IS VALID"); 
    else    
        printf("ENTERED VARIABLE NAME IS INVALID");
}
    
