#include<stdio.h>
void main()
{
    FILE *fptr;
    char c;
    fptr = fopen("techno.txt","r");
    if(fptr == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        // printf("%c",fgetc(fptr));
        // printf("%c",fgetc(fptr));
        // printf("%c",fgetc(fptr));
        // printf("%c",fgetc(fptr));
        // printf("%c",fgetc(fptr));
        // printf("%c",fgetc(fptr));
        // printf("%c",fgetc(fptr));
        // printf("%c",fgetc(fptr));
        // printf("%c",fgetc(fptr));
        c= fgetc(fptr);
        while(c != EOF)
        {
            printf("%c",c);
            c=fgetc(fptr);
        }
        fclose(fptr);
    }
}