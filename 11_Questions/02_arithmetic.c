// write a program to calculate area of circle
// pi*r*r
#include"stdio.h" 
#define pi 3.14
void main()
{
    // const float pi = 3.14;
    float r,area;
    printf("\n Enter radious:");
    scanf("%f",&r);
    area = pi * r * r;
    printf("\n Area is :%.2f",area);

}