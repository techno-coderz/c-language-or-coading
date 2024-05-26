#include<stdio.h>
void main()
{
    char day;
    printf("enter day:");
    scanf("%c",&day);
    if(day == 's')
    {
        printf("hurry!,Today is holiday");
    } 
    else{
        printf("oh! Go to school");
    }
}