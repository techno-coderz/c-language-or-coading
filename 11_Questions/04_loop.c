// pattern
//         *
//       * *
//     * * *
//   * * * *
// * * * * *
#include<stdio.h>
void main()
{
    int i=1,j,k;
    for(i;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf("\t");
        }
        for(k=1;k<=i;k++)
        {
            printf("*\t");
        }
        printf("\n");

    }
}