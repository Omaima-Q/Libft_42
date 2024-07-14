#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

int	main(void)
{
	int		a;
	int		b;
	t_list	*head;

	a = 5;
	b = 10;
	// Create the first node
	head = malloc(sizeof(t_list));
	if (head == NULL)
	{
		perror("Error allocating memory for head node");
		return (1);
	}
	head->content = &a;
	// Create the second node and link it
	head->next = malloc(sizeof(t_list));
	if (head->next == NULL)
	{
		perror("Error allocating memory for second node");
		free(head); // Free previously allocated memory
		return (1);
	}
	head->next->content = &b;
	head->next->next = NULL; // Properly terminate the list
	// Calculate and print the size of the list
	printf("Size of the list: %i\n", ft_lstsize(head));
	// Clean up: free allocated memory
	free(head->next);
	free(head);
	return (0);
}
