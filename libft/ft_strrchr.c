/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:06:09 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/07 21:10:48 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
    const char *last_pos = NULL;  // Initialize last_pos to NULL
    
    while (*s) {
        if (*s == (char)c)
            last_pos = s;  // Update last_pos to current position if match is found
        s++;
    }
    
    if (c == '\0')
        return (char *)s;  // Return the null terminator position if c is '\0'
    
    return (char *)last_pos;  // Return last_pos, which contains the last occurrence of c
}

int main(void)
{
    const char *str = "Hello, world!";
    char *result;

    // Example 1: Search for 'o' in str
    result = ft_strrchr(str, 'l');
    if (result != NULL)
        printf("Found 'l' at position: %ld\n", result - str);
    else
        printf("Character not found.\n");

    // Example 2: Search for 'z' in str
    result = ft_strrchr(str, 'z');
    if (result != NULL)
        printf("Found 'z' at position: %ld\n", result - str);
    else
        printf("Character not found.\n");

    // Example 3: Search for '\0' (null terminator)
    result = ft_strrchr(str, '\0');
    if (result != NULL)
        printf("Found '\\0' at position: %ld\n", result - str);
    else
        printf("Character not found.\n");

    return 0;
}
