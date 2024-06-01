// fun with argument of return type
#include<stdio.h>
int add(int,int);
void main()
{
    printf("%d",add(10,20));
}
int add(int a,int b)
{
    printf("a: %d, b:%d",a,b);
    return a+b;
}