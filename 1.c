// Write a program to calculate the total salary of a person.
// The user has to enter the basic salary (an integer) and the grade (an uppercase character), 
// and depending upon which the total salary is calculated as -                            
// totalSalary = basic + hra + da + allow – pf. where : hra = 20% of basic, da = 50% of basic, allow = 1700 if 
// grade = ‘A’, allow = 1500 if grade = ‘B’, allow = 1300 if grade = ‘C' or any other character, pf = 11% of basic. 
// Round off the total salary and then print the integral part only.

#include <stdio.h>
int main()
{
    printf("THIS IS A PROGRAM TO CALCULATE YOUR SALARY \n");

    // DECLARE THE VARIABLES USED 
    float sal;
    char grade;
    char A= 'A';
    char B= 'B';

    // TAKE INPUT OF BASIC SALARY FROM USER 
    printf("ENTER YOUR BASIC SALARY     ");
    scanf("%f",&sal);

    // TAKE INPUT OF GRADE FROM USER
    printf("ENTER YOUR GRADE     ");
    scanf("%s",&grade);

    // DECLARE OTHER VARIABLES
    float tsalary,hra,da,allow,pf;

    // CONDITION ON ALLOW
    if (grade==A)
        allow=1700;
    else if (grade==B)
        allow=1500;
    else 
        allow=1300;

    // CONDITION TO CALCULATE HRA
    hra=(sal*20)/100;

    // CONDITION TO CALCULATE DA
    da=(sal*50)/100;

    // CONDITIION TO CALCULATE PF
    pf=(sal*11)/100;

    // CONDITION FOR TOTAL SALARY
    tsalary=sal+hra+da+allow-pf;
    printf("TOTAL SALARY IS  %.2f",tsalary);

    return 0;
}

