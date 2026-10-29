#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

void unload(node *list);

int main(void)
{   
    // Memory for numbers
    node *list = NULL;
    
    // Build list
    for (int i = 0; i < 3; i++)
    {
        // Allocate node for number    
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            unload(list);
            return 1;
        }

        printf("Number: ");
        if (scanf("%d", &n->number) != 1)
        {
            free(n);
            unload(list);
            return 1;
        }
        n->next = NULL;
       
 
        // If list is empty     
        if (list == NULL)
        {
            //  This node is the whole list
            list = n;
        }

        // If number belongs at begining of list
        else if (n->number < list->number)
        {  
            n->next = list;
            list = n;
        }
        
        // If number belongs later in list
        else
        {
            
            // Iterate over nodes in list
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                
                // If at end of list
                if (ptr->next == NULL)
                {
                    // Append node
                    ptr->next = n;
                    break;
                }

                // If in middle of list
                if (n->number < ptr->next->number)
                {
                    n->next = ptr->next;
                    ptr->next = n;
                    break; 
                }     
            }
        }
    }

    // Print numbers
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {   
        printf("%i\n", ptr-> number);
    
    }

    // Free memory
    unload(list);
    return 0;
}

void unload(node *list)
{
    // Free memory
    node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
}
