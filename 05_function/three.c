//fun with return type but no argument
#include<stdio.h>
int multi();
void main()
{
    printf("%d",multi());
}
int multi()
{
    int a=100,b=2;
    return a*b;
}