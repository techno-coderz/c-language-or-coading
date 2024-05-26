#include<stdio.h>
void main()
{
    int no;
    printf("Enter No between 0 to 5:");
    scanf("%d",&no);
    if(no==0)
    {
        printf("no is 0");
    }
    else if(no==1)
    {
        printf("no is 1");
    }
    else if(no==2)
    {
        printf("no is 2");
    }
    else if(no==3)
    {
        printf("no is 3");
    }
    else if(no==4)
    {
        printf("no is 4");
    }
    else if(no==5)
    {
        printf("no is 5");
    }
    else{
        printf("Please enter no between 0 to 5");
    }
}