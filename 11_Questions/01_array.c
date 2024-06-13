// write a program to store value in array and print them
#include<stdio.h>
void main()
{
    int arr[5],i;
    printf("Enter values\n");
    for(i=0;i<5;i++)
    {
        printf("%d:",i);
        scanf("%d",&arr[i]);
    }
    //  for(i=0;i<5;i++) forword
     for(i=4;i>=0;i--) // reverse
    {
        printf("\n%d:%d",i,arr[i]);
        
    }
}