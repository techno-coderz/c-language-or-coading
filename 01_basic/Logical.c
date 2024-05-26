#include<stdio.h>
int main()
{
    // 0 ==false
    // 1 == true
    int no1=10,no2=20;
    // &&  || ! 
//    printf("%d",no1 > no2 && no1 < no2);// 0
//    printf("%d",no1 > no2 || no1 < no2);// 1
//    printf("%d",  !(no1 < no2));// 1

// assignment 
    // a = 10
    // 10 = a 
    // no1 = no2;
    // printf("%d",no1);
    // printf("%d",no2);
    //  no1 += no2;
    //  no1 -= no2;
    //  no1 *= no2;
    //  no1 /= no2;
    //  no1 %= no2;

    // incriment or decriment
    // no1++;//postfix incriment
    // ++no2;//prefix incriment
    no1--;//postfix decriment
    --no2;//prefix decriment
    // printf("%d",no1);
    // printf("%d",no2);
    // printf("%d",sizeof(char));
    printf("%d",sizeof(float));
    return 0;
}