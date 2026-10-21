#include <stdio.h>
#include <string.h>

int main(void)
{
    char *strings[] = {"battleship", "boot", "iron", "cat"};
    char s[100];

    printf("String ");
    scanf("%99s", s);
    
    for (int i = 0; i < 4; i++)
    {
        if (strcmp(strings[i], s) == 0) 
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
