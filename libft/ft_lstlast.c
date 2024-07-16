#include "libft.h"
#include <stdio.h>

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
