#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list *ft_lstnew(void *content) 
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    
    if (new_node) {
        new_node->content = content;
        new_node->next = NULL;
    }
    return new_node;
}

int main(void) 
{
    // Create nodes with integer values
    int data1 = 10;
    int data2 = 20;
    int data3 = 30;
    
    // Create the first node
    t_list *node1 = ft_lstnew(&data1);
    
    // Create subsequent nodes
    t_list *node2 = ft_lstnew(&data2);
    t_list *node3 = ft_lstnew(&data3);
    
    // Link the nodes together
    node1->next = node2;
    node2->next = node3;
    
    // Traverse the linked list and print each node's content
    t_list *current = node1;
    while (current != NULL) {
        int *value = (int *)(current->content);
        printf("%d -> ", *value);
        current = current->next;
    }
    printf("NULL\n");
    
    return 0;
}

