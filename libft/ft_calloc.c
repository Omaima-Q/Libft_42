/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:29:42 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/08 18:32:53 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h> // For malloc and free


void *ft_calloc(size_t count, size_t size)
{
    unsigned char *tmp;
    size_t i;
    
    i = 0;
    /* allocating count * size bytes in memory with malloc */
    tmp = malloc(count * size);
    /* check if the memory was allocated */
    if (!tmp)
        return (NULL);
    /* loop over every allocated bytes and set it to 0 */
    while (i < count * size)
        tmp[i++] = 0;
    /* return the allocated memory */
    return (tmp);
}

// Assume ft_calloc is defined in libft.h and implemented elsewhere

int main(void)
{
    size_t count = 5;
    size_t size = sizeof(int);
    int *arr;

    // Allocate memory using ft_calloc
    arr = (int *)ft_calloc(count, size);

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Print the initialized array
    printf("Array after calloc:\n");
    for (size_t i = 0; i < count; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);

    return 0;
}
