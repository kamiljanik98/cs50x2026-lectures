#include <stdio.h>
#include <string.h>

int main(void)
{

    FILE *file = fopen("phonebook.csv", "a");
    if (file == NULL) 
    {
        return 1;
    }    

    char name[100], number[30];
    
    printf("Name: ");
    scanf("%99s", name);

    printf("Number: ");
    scanf("%29s", number);
    
    fprintf(file, "%s,%s\n", name, number);

    fclose(file);
}
