#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    long dollars = 1;
    while(true)
    {
        char c;
        printf("Here's $%li. Double it and give to next person? ", dollars);
        scanf(" %c", &c);

        if (c == 'y')
        {
            dollars *= 2;
        }
        else 
        {
            break;
        }
    }
    printf("Here's $%li.\n", dollars);
}
