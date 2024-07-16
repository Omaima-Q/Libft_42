#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if ( *lst == NULL)
    {
        *lst = new;
        new->next = NULL;
    }
    else{
        new->next = *lst;
        *lst = new;
    }
}

int main()
{
    t_list *head = NULL;
     
    t_list *node1 = malloc(sizeof(t_list));
    node1->content = malloc(sizeof(int));
    *(int*)node1->content = 10;
    node1->next = NULL;

    t_list *node2 = malloc(sizeof(t_list));
    node2->content = malloc(sizeof(int));
    *(int*)node2->content = 20;
    node2->next = NULL;

    t_list *node3 = malloc(sizeof(t_list));
    node3->content = malloc(sizeof(int));
    *(int*)node3->content = 30;
    node3->next = NULL;

    ft_lstadd_front(&head, node1);
    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node3);
    
    printf("Linked list after adding node to front \n");
    t_list *current = head;
    while (current != NULL)
    {
        printf("%d -> ", *(int*)current->content);
        current = current->next;
    }
    printf("NULL\n");
    
    while (head != NULL)
    {
        t_list *temp = head;
        head = head->next;
        free(temp->content);
        free(temp);
    }
}
