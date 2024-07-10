/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:24:49 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/04 15:43:08 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include  <stdio.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    
    i = 0;
    if (size > 0)
    {
        while( src[i] && (i < size-1))
        {
            dst[i] = src[i];
            i++;
        }
    }
    dst[i] = '\0';
    while(src[i])
        i++;
    return i;
}

// int main(void)
// {
//     char sorc[] = "Omaima";
//     char dest[20];
//     size_t len = ft_strlcpy(dest, sorc, sizeof(sorc));
    
//     printf("Copied string: %s \n", dest);
//     printf("length of copied string: %zu \n", len);
    
//     return (0);
// }