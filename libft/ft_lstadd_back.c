#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (*lst == NULL)
    {
        *lst = new;
        return ;
    }

    t_list *last = *lst;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new;
}

int main() {
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

    // Add nodes to the back of the list using ft_lstadd_back
    ft_lstadd_back(&head, node3);
    ft_lstadd_back(&head, node2);
    ft_lstadd_back(&head, node1);

    // Print the contents of the linked list
    printf("Linked list after adding nodes to back: ");
    t_list *current = head;
    while (current != NULL) {
        printf("%s -> ", (char *)current->content);
        current = current->next;
    }
    printf("NULL\n");

    // Clean up: free allocated memory
    while (head != NULL) {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
