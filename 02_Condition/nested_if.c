#include<stdio.h>
void main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d",&age);
    if(age < 18)
    {
        if(age < 10)
        {
            printf("you are child");
        }
        else
        {
            printf("you are young");
        }
    }
    else
    {
        printf("your age is more than 18 years");
    }
}