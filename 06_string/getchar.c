#include<stdio.h>
void main()
{
    char c,str[50];
    int i=0;
    printf("Enter string:");
    do{
        c=getchar();
        str[i]=c;
        i++;
    }while(c!='\n');
    str[i]='\0';
    printf("String is:%s",str);
}