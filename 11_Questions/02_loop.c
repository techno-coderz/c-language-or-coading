// write a code to sum of array first 10 int element
#include<stdio.h>
void main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10},counter = 0 ,i;
    for(i=0;i<10;i++)
    {
        counter = counter + arr[i]; // 0 + 1 = 1
        // 1 + 2 = 3
        

    }
    printf("sum is : %d",counter);
}
