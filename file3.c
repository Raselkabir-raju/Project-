#include<stdio.h>
#include<string.h>

int main()
{
    FILE *file;
    char name[20];

    file = fopen("test.txt","w");

    if(file==NULL)
    {
        printf("File doesn't exist\n");
    }
    else
    {
        printf("File is Opened\n");
        printf("Enter your full Name :");
        fgets(name, sizeof(name), stdin);

        fputs(name,file);
        printf("File is written successfully\n");
        fclose(file);

    }
}