#include <stdio.h>

int get_int(const char *question)
{
    int n;
    printf("%s", question);
    scanf("%i", &n);
    return n;

}


int main (void)
{
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    printf("%i\n", x + y);
}


