// fun with argument but not return type
#include<stdio.h>
void sub(int,int);
void main()
{
    sub(50,10);
}
void sub(int a,int b)
{
    printf("sunbstraction:%d",a-b);
}