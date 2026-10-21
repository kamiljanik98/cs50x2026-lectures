#include <stdio.h>

int main (void) 
{
    float x, y;
    
    printf("What's, x? ");
    scanf("%f", &x);

    printf("What's, y? ");
    scanf("%f", &y);

    printf("%.50f\n", (float) x / y);
}
