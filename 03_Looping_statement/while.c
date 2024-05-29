#include<stdio.h>
void main()
{
    // initilization
    // while(test condition)
    // {
    //     body of loop
    //     ++/--
    // }
    int no1,i;
    printf("Enter no for print table:");
    scanf("%d",&no1);
    i=1;
    while(i<=10)
    {
       
        printf("%d * %d = %d\n",no1,i,no1*i);
        i++;
    }
}