#include<stdio.h>
void main()
{
    int a[5],i;

    for(i=0;i<5;i++)//insilize value
    {
        printf("Enter Value:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)//insilize value
    {
        printf("a[%d]:%d\n",i,a[i]);
        
    }
    // a[0]=1;
    // a[1]=2;
    // a[2]=3;
    // a[3]=4;
    // a[4]=5;
    // printf("%d\n",&a[0]);
    // printf("%d\n",&a[1]);
    // printf("%d\n",&a[2]);
    // printf("%d\n",&a[3]);
    // printf("%d\n",&a[4]);
}