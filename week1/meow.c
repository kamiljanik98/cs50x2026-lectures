#include <stdio.h>

int main (void)
{	
	int n;

	do 
	{
		printf("What's n value?" );
		scanf("%i", &n);
		
		if (n < 0) 
		{
			printf("Please use a positive integer\n");
		}
	}
	while (n < 0);

	for (int i = 0; i < n; i++)
	{
		printf("meow\n");
	}

}

