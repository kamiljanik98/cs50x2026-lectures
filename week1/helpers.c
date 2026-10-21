#include <stdio.h>
#include "helpers.h"

        
char get_char(const char *prompt)
{
    char c;
    printf("%s", prompt);
    scanf("%c", &c);
    return c;
}

int get_int(const char *prompt)
{
    int n;
    printf("%s", prompt);
    scanf("%d", &n);
    return n;
}
