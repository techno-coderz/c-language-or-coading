#include<stdio.h>
void main()
{
    FILE *fptr;
    fptr = fopen("techno.txt","w");
    if(fptr == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        fputc('s',fptr);
        fputc('u',fptr);
        fputc('b',fptr);
        fclose(fptr);
    }
}