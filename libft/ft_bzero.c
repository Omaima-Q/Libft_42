/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:48:46 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/06 15:14:34 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> // Include necessary header for NULL pointer definition
#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *placeholder = (unsigned char *)b;
    
    while (len > 0)
    {
        *placeholder = (unsigned char)c;
        placeholder++;
        len--;
    }
    
    return b;
}

void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

int main(void)
{
    unsigned buffer[10];
    ft_bzero(buffer, sizeof(buffer)); // Corrected size argument to sizeof(buffer)
    
    return 0;
}
