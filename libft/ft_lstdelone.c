#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (lst == NULL)
    {
        return; 
    }
    
    if (del)
    {
        del(lst->content);
    }
    free(lst);
}

// Sample deletion function
void delete_content(void *content) 
{
    free(content);  // Example: assuming content was dynamically allocated
}

int main(void) {
    // Create a linked list node
    t_list *node = malloc(sizeof(t_list));
    if (node == NULL) {
        perror("Memory allocation failed");
        return EXIT_FAILURE;
    }

    // Allocate memory for content (example: integer)
    int *data = malloc(sizeof(int));
    if (data == NULL) {
        perror("Memory allocation failed");
        free(node);
        return EXIT_FAILURE;
    }
    *data = 42;

    node->content = data;
    node->next = NULL;

    // Display the content of the node before deletion
    printf("Node content before deletion: %d\n", *(int *)node->content);

    // Delete the node using ft_lstdelone
    ft_lstdelone(node, &delete_content);

    // After deletion, 'node' is now NULL or points to freed memory (undefined behavior)
    // Attempting to access 'node' or its content is undefined behavior
    // printf("Node content after deletion: %d\n", *(int *)node->content); // Avoid accessing 'node' here

    return 0;
}
