#include <string.h>
#include <stdio.h>


int main(void)
{
    char name[100];

    printf("Name: ");
    scanf("%99s", name);

    int length = strlen(name);
    printf("%i\n", length);
}

