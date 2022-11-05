// NAME - PRANJAL VAIDYWAN
// ROLL NO - 2100320100124
// CSE B
// Program for converting all lower case letters to upper case and vice versa in the given sentence
#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Take large size array to convert all letters from lowercase to uppercase for complete input from user.
    char string[100];
    int i;
    printf("\nEnter a sentence to convert all lower case letters to upper case and vice versa in the given sentence: ");
    gets(string);
    // Loop for string traversal.

    for (i = 0; string[i]!='\0'; i++)
    {
        // Condition to check lowercase and converting into uppercase
        if(string[i] >= 'a' && string[i] <= 'z') 
        {
            // Subtract 32 from ascii value of lowercase letter to get the ascii value of corresponding Uppercase letter. 
            string[i] = string[i] - 32;
        }
        else
        {
            // Condition to check uppercase and converting into lowercase
            if(string[i] >= 'A' && string[i] <= 'Z') 
            {
                string[i] = string[i] + 32;
            }
        }
    }
    printf("\nSentence after change is = %s", string);
    return 0;
}
