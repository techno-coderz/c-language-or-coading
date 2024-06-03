#include<stdio.h>
void main()
{
    int no[3]={10,20,30},*ptr;
    ptr = &no[2];

    printf("%d \n",*ptr);
    ptr--;
    printf("%d \n",*ptr);;
    ptr--;
    printf("%d \n",*ptr);

}