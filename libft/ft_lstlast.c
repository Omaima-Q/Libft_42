#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
    {
        return (NULL);
    }
    
    t_list *current = lst;

    while (current->next != NULL)
    {
        current = current->next;
    }
    return (current);
}

int main() 
{
    t_list *head = NULL;  // Initialize an empty linked list

    // Create nodes and populate data
    t_list *node1 = malloc(sizeof(t_list));
    node1->content = "Node 1";
    node1->next = NULL;

    t_list *node2 = malloc(sizeof(t_list));
    node2->content = "Node 2";
    node2->next = NULL;

    t_list *node3 = malloc(sizeof(t_list));
    node3->content = "Node 3";
    node3->next = NULL;

    // Link nodes to form a list
    head = node1;
    node1->next = node2;
    node2->next = node3;

    // Using ft_lstlast to find the last node
    t_list *lastNode = ft_lstlast(head);

    // Print the content of the last node
    if (lastNode != NULL) {
        printf("Content of the last node: %s\n", (char *)lastNode->content);
    } else {
        printf("List is empty.\n");
    }

    // Clean up: free allocated memory
    while (head != NULL) {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
