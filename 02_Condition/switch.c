#include<stdio.h>
void main()
{
    int no;
    printf("Enter No between 0 to 5:");
    scanf("%d",&no);
    switch(no)
    {
        case 0:
            printf("no is 0");
            break;
        case 1:
            printf("no is 1");
            break;
        case 2:
            printf("no is 2");
            break;
        case 3:
            printf("no is 3");
            break;
        case 4:
            printf("no is 4");
            break;
        case 5:
            printf("no is 5");
            break;
        default :
            printf("no is not between 0 to 5");
            break;
        
    }
}