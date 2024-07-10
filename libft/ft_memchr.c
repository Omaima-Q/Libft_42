/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:40:45 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/08 18:05:48 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    size_t i;
    unsigned char uc;
    /* converting both s and c to unsigned char */
    str = (unsigned char *) s;
    uc = (unsigned char) c;
    i = 0;
    /* looping over n bytes */
    while (i < n)
    { /* same check as strchr */
        if (str[i] == uc)
            /* there, we return a void pointer instead
             * of the char pointer we returned in strchr
             */
            return ((void *) &str[i]);
        i++;
    }
    /* if we reached this point, we didn't find any occurence
     * of c in n bytes, so we return NULL
     */
    return (NULL);
}

int main(void)
{
    const char *str = "Hello, world!";
    char find_char = 'w';
    size_t len = 13; // Length of the string including null terminator

    void *result = ft_memchr(str, find_char, len);

    if (result != NULL)
    {
        printf("'%c' found at position: %ld\n", find_char, (char *)result - str);
    }
    else
    {
        printf("'%c' not found in the string.\n", find_char);
    }
    return (0);  
}
