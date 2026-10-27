#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s, *t;
    
    printf("i: ");
    scanf("%99s", s);
    printf("j: ");
    scanf("%99s", t);

    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}
