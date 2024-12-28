#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char name[50];
    int age, phoneNumber, num, i;

    file = fopen("student.txt", "a");
    if (file == NULL)
    {
        printf("File does not exist or could not be opened.\n");
    }
    else
    {
        printf("File opened successfully.\n");


        printf("Enter the number of students: ");
        scanf("%d", &num);

        getchar(); 

        fprintf(file, "Name\t\t\tAge\tPhoneNumber\n");

        for (i = 0; i < num; i++)
        {
            printf("\nEnter student's name: ");
            fgets(name, sizeof(name), stdin);

            size_t len = strlen(name);
            if (len > 0 && name[len - 1] == '\n')
            {
                name[len - 1] = '\0';
            }

            printf("Enter student's age: ");
            scanf("%d", &age);

            printf("Enter student's phone number: ");
            scanf("%d", &phoneNumber);

            getchar();

            fprintf(file, "%-20s\t%d\t%d\n", name, age, phoneNumber);
        }

        printf("\nData has been successfully written to the file.\n");
        fclose(file);
    }


}
