#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void ft_lstiter(t_list *lst, void (*f)(void *)) 
{
    while (lst) 
    {
        f(lst->content);  // Apply function f to the content of the current node
        lst = lst->next;  // Move to the next node
    }
}

// Example function to be applied to each element in the list
void print_content(void *content) 
{
    printf("%s\n", (char *)content);  // Assuming content is a string (char *)
}

int main(void) 
{
    // Creating a linked list manually for demonstration
    t_list *head = malloc(sizeof(t_list));
    t_list *second = malloc(sizeof(t_list));
    t_list *third = malloc(sizeof(t_list));

    head->content = "First";
    head->next = second;

    second->content = "Second";
    second->next = third;

    third->content = "Third";
    third->next = NULL;

    // Print the elements of the linked list using ft_lstiter
    ft_lstiter(head, &print_content);

    // Clean up: free memory used by the linked list
    free(head);
    free(second);
    free(third);

    return 0;
}
