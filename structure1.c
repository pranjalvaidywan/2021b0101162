//Get the input of student: Name, Roll No, Marks in 6 subjects in 12th. 
//Find if the student is eligible for admission in Delhi University. 
//A student is eligible for DU if he has scored 95 % or more in Best 4.
#include<stdio.h>
struct student
{
    char name[30];
    int rollno;
    int marks[5];
}s;
int main()
{
    int i,z,sum=0;
    float check;
    fgets(s.name, sizeof(s.name), stdin);
    scanf("%d",&s.rollno);
    for(int i=0;i<5;i++)
    {
        scanf("%d",&s.marks[i]);
        sum=sum+s.marks[i];
    }
    check=sum/5;
    int min=s.marks[0];
    for(i=1;i<5;i++)
    {
        if(s.marks[i]<min)
        {
            min=s.marks[i];
            z=i;
        }
    }
    for(int x=0;x<5;x++)
    {
        if(x=z)
        {
            continue;
        }
        printf("%d ",s.marks[x]);
    }

    if(check>=95)
    {
        printf("%s",s.name);
        printf("%d \n",s.rollno);
    }
    else
        printf("YOU ARE NOT ELIGIBLE FOR ADMISSION");

}