#include<stdio.h>
struct student
{
    int roll;
    char name[5];
}s1,s2;
    // struct student s1;
void main()
{
    // struct student s1;
    s1.roll=1;
    s2.roll=2;
    printf("Enter name s1:");
    scanf("%s",s1.name);
    printf("Enter name s2:");
    scanf("%s",s2.name);
    printf("\n %d",s1.roll);
    printf("\n %s",s1.name);
    printf("\n %d",s2.roll);
    printf("\n %s",s2.name);
    printf("%d",sizeof(s1));
}