// find the largest number among the three numbers entered by the user.


#include <stdio.h>
int main()
{
    int num1,num2,num3;

    // FIRST TAKE THREE DIFFERENT INPUT FROM USER
    printf("ENTER THE FIRST NUMBER ");
    scanf("%d",&num1);

    printf("ENTER THE SECOND NUMBER ");
    scanf("%d",&num2);

    printf("ENTER THE THIRD NUMBER ");
    scanf("%d",&num3);
    // LOGIC TO FIND THE GREATEST NUMBER AMONGST THREE ENTERED NUMBERS

    if(num1>num2 && num1>num3)
        printf("%d IS THE GREATEST NUMBER \n",num1);

    else if (num2>num3 && num2>num1)
        printf("%d IS THE GREATEST NUMBER \n",num2);

    else if (num3>num2 && num3>num1)
        printf("%d IS THE GREATEST NUMBER \n",num3);
    
    else
        printf("ALL THE ENTERED NUMBERS SHOULD BE DIFFERENT ");
}