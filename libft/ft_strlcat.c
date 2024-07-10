/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:43:30 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/06 01:34:18 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

// size_t  ft_strlcat(char *dst, const char *src, size_t size)
// {
//     size_t i;
// 	size_t j;
// 	size_t k;

// 	i = 0;
// 	while (dst[i] != '\0')
// 		i++;
// 	j = 0;
// 	while (src[j] != '\0' && j < size)
// 	{
// 		dst[i + j] = src[j];
// 		j++;
// 	}
// 	dst[i + j] = '\0';
// 	k = 0;
// 	while (src[k] != '\0')
// 		k++;
// 	return (k + size);
// }

// int main(void) 
// {
//     char s1[50] = "This is s1. ";
//     char s2[50] = "This is s2.";

//     ft_strlcat(s1, s2, 20);
//     printf("Final string : %s", s1);
//     return(0);
// }

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i = 0;
    size_t j = 0;
    size_t dst_len = 0;
    size_t src_len = 0;

    // Calculate the length of the destination string
    while (dst[i] != '\0' && i < size)
    {
        i++;
    }
    dst_len = i;

    // Calculate the length of the source string
    while (src[j] != '\0')
    {
        j++;
    }
    src_len = j;

    // Make sure there is room for null-terminator in dst
    if (size <= dst_len)
    {
        return dst_len + src_len;
    }

    j = 0;
    while (src[j] != '\0' && dst_len + j < size - 1)
    {
        dst[dst_len + j] = src[j];
        j++;
    }
    dst[dst_len + j] = '\0';

    return dst_len + src_len;
}

int main(void) 
{
    char s1[50] = "This is s1. ";
    char s2[50] = "This is s2.";

    size_t result = ft_strlcat(s1, s2, 30);
    printf("Final string: %s\n", s1);
    printf("Total length: %zu\n", result);
    
    return 0;
}
