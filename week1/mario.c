#include <stdio.h>

void print_row(int width);

int main (void)
{
    const int n = 3;
    for (int i = 0; i < n; i++) 
    {
        print_row(n);
    }
}

void print_row(int width)
{
    for (int j = 0; j < width; j++)
    {
        printf("#");
    }
    printf("\n");
}
