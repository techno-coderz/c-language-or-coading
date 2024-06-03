//strlen()
//strcpy()
//strcat()
//strcmp()

#include<stdio.h>
#include<string.h>
void main()
{
    char str[50],str1[50];
    int l,a;
    printf("Enter An String:");
    scanf("%s",str);
    strcpy(str1,str);
    strcat(str,str1);
    printf("str is:%s",str);

    // a=strcmp(str,str1);
    // if(a>0)
    // {
    //     printf("str  is big");
    // }
    // else if(a < 0)
    // {
    //     printf("str1  is big");
    // }
    // else
    // {
    //     printf("str1 and str are same");

    // }
    // printf("\nstr1 is:%s",str1);

    // l=strlen(str);
    // printf("\n Lenth is:%d",l);
}