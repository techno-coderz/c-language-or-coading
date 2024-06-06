#include<stdio.h>
void main()
{
    FILE *fptr;
    int a=10;
    fptr = fopen("techno.txt","w");
    if(fptr == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        fprintf(fptr,"LiKE %d",a);
        fclose(fptr);
    }
}