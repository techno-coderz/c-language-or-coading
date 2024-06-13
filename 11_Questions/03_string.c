
// write a program to count vowels and consonants in string
#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    int i,len;
    int con=1;
    printf("\n Enter an string:");
    scanf("%s",str);
    len = strlen(str);
    for(i=0;i<=len;i++)
    {
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u' || str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U')
        {
            con = 0;
            printf("string is contain vovels");
            break;
        }
    }
    if(con == 1)
    {
        printf("string is not contain vovels");
    }
}


