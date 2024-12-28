#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;

    char name[20] = "Rasel Kabir Raju";
    int length = strlen(name);
    int i;

   file = fopen("test.txt","w");

   if(file==NULL)
   {
   printf("File doesn't exist");
   }

   else{
   printf("File is opend\n");
   for(i=0; i<length; i++)
   {
    fputc(name[i],file);
   }
   printf("File is written Successfully\n");

   fclose(file);
   }
}
