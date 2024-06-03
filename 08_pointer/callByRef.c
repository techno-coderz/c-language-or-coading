#include<stdio.h>
void fun(int * ,int *);
void main()
{
    int a=10,b=20;
    printf("\n value before calling:%d : %d",a,b);
    fun(&a,&b);
    printf("\n value after calling:%d : %d",a,b);

}
void fun(int *x,int *y)
{
    *x=11;
    *y=22;
}