#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age== 18)
    {
        printf("your age is 18 year");
    }
    if(age > 18)
    {
        printf("your age greter than 18 year");
    }
    printf("Subscribe!");
    return 0;
}