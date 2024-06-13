
// write a program to calculate area of square
// side * side
#include<stdio.h>
void main()
{
   float side;
   printf("\n Enter side of an square :");
   scanf("%f",&side);
    side *= side;
    printf("Area of square is:%.2f",side);
}