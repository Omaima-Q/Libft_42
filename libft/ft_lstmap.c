#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// Function prototypes
t_list *ft_lstnew(void *content);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstclear(t_list **lst, void (*del)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void *duplicate_content(void *content);
void delete_content(void *content);
void print_lst(t_list *lst);

// Create a new list element
t_list *ft_lstnew(void *content)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (new_node)
    {
        new_node->content = content;
        new_node->next = NULL;
    }
    return (new_node);
}

// Add a new element to the end of the list
void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (*lst == NULL)
    {
        *lst = new;
        return;
    }

    t_list *last = *lst;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new;
}

// Clear the list
void ft_lstclear(t_list **lst, void (*del)(void *))
{
    if (!lst || !del)
    {
        return;
    }

    t_list *current = *lst;
    t_list *next;

    while (current != NULL)
    {
        next = current->next;
        del(current->content);
        free(current);
        current = next;
    }
    *lst = NULL;
}

// Map function for the list
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_lst = NULL;
    t_list *new_elem;

    while (lst)
    {
        new_elem = ft_lstnew(f(lst->content));
        if (!new_elem)
        {
            ft_lstclear(&new_lst, del);
            return (NULL);
        }
        ft_lstadd_back(&new_lst, new_elem);
        lst = lst->next;
    }
    return (new_lst);
}

// Duplicate the content of an element
void *duplicate_content(void *content)
{
    int *new_content = (int *)malloc(sizeof(int));
    if (new_content)
    {
        *new_content = *(int *)content;
    }
    return (new_content);
}

// Delete the content of an element
void delete_content(void *content)
{
    free(content);
}

// Print the list (assuming the content is an integer for simplicity)
void print_lst(t_list *lst)
{
    while (lst)
    {
        printf("%d -> ", *(int *)(lst->content));
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    t_list *list = NULL;
    t_list *mapped_list;
    int a = 1, b = 2, c = 3, d = 4;

    // Create a list: 1 -> 2 -> 3 -> 4 -> NULL
    ft_lstadd_back(&list, ft_lstnew(&a));
    ft_lstadd_back(&list, ft_lstnew(&b));
    ft_lstadd_back(&list, ft_lstnew(&c));
    ft_lstadd_back(&list, ft_lstnew(&d));

    printf("Original list:\n");
    print_lst(list);

    // Apply ft_lstmap with duplicate_content function
    mapped_list = ft_lstmap(list, &duplicate_content, &delete_content);

    printf("Mapped list:\n");
    print_lst(mapped_list);

    // Free the lists
    ft_lstclear(&list, &delete_content);
    ft_lstclear(&mapped_list, &delete_content);

    return 0;
}
