#include<stdio.h>
void main()
{
    FILE *fptr;
    char a;
    fptr = fopen("techno.txt","r");
    if(fptr == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        fscanf(fptr,"%c",&a);
        printf("%c",a);
        fscanf(fptr,"%c",&a);
        printf("%c",a);
        fscanf(fptr,"%c",&a);
        printf("%c",a);
        fscanf(fptr,"%c",&a);
        printf("%c",a);
        
       
        fclose(fptr);
    }
}