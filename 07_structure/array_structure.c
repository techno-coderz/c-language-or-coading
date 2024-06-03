#include<stdio.h>
struct student
{
    int roll;
    char name[5];
}s1[2];
   
void main()
{
    s1[0].roll=1;
    s1[1].roll=2;
   
    
    printf("Enter name s1:");
    scanf("%s",s1[0].name);
    printf("Enter name s2:");
    scanf("%s",s1[1].name);
   
    printf("\n %d",s1[0].roll);
    printf("\n %s",s1[0].name);
    printf("\n %d",s1[1].roll);
    printf("\n %s",s1[1].name);
  
}