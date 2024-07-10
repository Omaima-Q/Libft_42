/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:35:09 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/08 18:38:20 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h> // For free function

#include <stdlib.h> // for malloc

char *ft_strdup(const char *s1)
{
    char *dest;
    size_t len = 0;

    // Calculate the length of s1
    while (s1[len])
        len++;

    // Allocate memory for dest
    dest = (char *) malloc(len + 1);
    if (!dest)
        return NULL;

    // Copy s1 to dest
    for (size_t i = 0; i < len; i++)
        dest[i] = s1[i];

    // Add null terminator
    dest[len] = '\0';

    return dest;
}
// Assume ft_strdup is defined in libft.h and implemented elsewhere

int main(void)
{
    const char *original = "Hello, world!";
    char *duplicate;

    // Duplicate the string using ft_strdup
    duplicate = ft_strdup(original);

    if (duplicate == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Print the original and duplicated strings
    printf("Original string: %s\n", original);
    printf("Duplicated string: %s\n", duplicate);

    // Free the allocated memory for duplicate
    free(duplicate);

    return 0;
}

