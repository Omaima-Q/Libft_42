/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 20:49:02 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/07 21:03:33 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
    while(*s)
    {
        if (*s == (char )c)
              return (char *)s;
        s++;
    }
    if (c == '\0')
        return (char *)s;
    return (NULL);
}

int main(void)
{
    const char *str = "Hello, world!";
    char *result;

    // Example 1: Search for 'o' in str
    result = ft_strchr(str, 'l');
    if (result != NULL)
        printf("Found 'l' at position: %ld\n", result - str);
    else
        printf("Character not found.\n");

    // Example 2: Search for 'z' in str
    result = ft_strchr(str, 'z');
    if (result != NULL)
        printf("Found 'z' at position: %ld\n", result - str);
    else
        printf("Character not found.\n");

    // Example 3: Search for '\0' (null terminator)
    result = ft_strchr(str, '\0');
    if (result != NULL)
        printf("Found '\\0' at position: %ld\n", result - str);
    else
        printf("Character not found.\n");

    return 0;
}
