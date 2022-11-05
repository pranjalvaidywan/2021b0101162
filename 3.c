// check whether an alphabet entered by the user is a vowel or a consonant.

#include <stdio.h>
int main()
{
    char alpha,j;
    int num=0;
    // TAKE INPUT FROM THE USER TO CHECK WHETHER IT IS CONSONANT OR VOWEL

    printf("ENTER THE CHARACTER ");
    scanf("%c",&alpha);

    char arr[10]={'a','e','i','o','u','A','E','I','O','U',\0};
    for(j=0;j<11;j++)
    {
        if(arr[j]==alpha)
            num=num+1;
        else
            num=0;
    }  
    printf("%d",num);
    if(num==1)
        printf("%c IS A VOWEL ",alpha);
    else
        printf("%c IS A CONSONANT ",alpha);
    return 0;
}