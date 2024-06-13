//  write a code to enter 2 number and check which is big 
#include<stdio.h>
void main()
{
    int no1,no2;
    printf("\n Enter a number1:");
    scanf("%d",&no1);
     printf("\n Enter a number2:");
    scanf("%d",&no2);
    if(no1 > no2 ) 
    {
        printf("\n number1 is big : %d",no1);
    }
    else 
    {
        printf("\n number2 is big:%d",no2);

    }

}

