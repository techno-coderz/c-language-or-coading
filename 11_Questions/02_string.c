#include<stdio.h>
#include<string.h>
void main()
{
    char str[40],str2[40];
    printf("Enter str:");
    scanf("%s",str);
    printf("Enter str:");
    scanf("%s",str2);
    if(strcmp(str,str2)==0)
    {
        printf("strings are same");
    }
    else 
    {
        printf("str is not equal");
    }
    printf("str is:%d",str);
    printf("str is:%s",str2);
}