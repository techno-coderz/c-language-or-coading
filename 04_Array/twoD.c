#include<stdio.h>
void main()
{
    int a[2][3],i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter value of a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("print\n");
    for(i=0;i<2;i++)//print
    {
        for(j=0;j<3;j++)
        {
            printf("value of a[%d][%d]:%d\n",i,j,a[i][j]);
          
        }
    }
    // a[0][0] = 10;
    // a[0][1] = 20;
    // a[0][2] = 100;
    // a[1][0] = 30;
    // a[1][1] = 40;
    // a[1][2] = 200;
    // printf("%d\n",a[0][0]);
    // printf("%d\n",a[0][1]);
    // printf("%d\n",a[0][2]);
    // printf("%d\n",a[1][0]);
    // printf("%d\n",a[1][1]);
    // printf("%d\n",a[1][2]);
}