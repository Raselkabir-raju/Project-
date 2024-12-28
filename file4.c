#include<stdio.h>
int main()
{
    FILE *file;
    char fname[50];
    char lname[30];

    file = fopen("test.txt","r");
    if(file==NULL)
    {
        printf("File does not exist");

    }
    else
    {
        printf("File is opened\n");
        fscanf(file,"%s %s",fname,lname);
        printf("%s %s\n",fname,lname);
        fclose(file);
    }
}