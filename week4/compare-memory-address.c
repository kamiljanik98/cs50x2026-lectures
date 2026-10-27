#include <stdio.h>

int main(void)
{
    char *s, *t;
    
    printf("i: ");
    scanf("%99s", s);
    printf("j: ");
    scanf("%99s", t);

    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}
