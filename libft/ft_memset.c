/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:50:05 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/06 00:55:16 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void    *ft_memset(void *s, int c, size_t len)
{
    unsigned char *str;
    str = (unsigned char *)s;

    while (len--)
    {
        *str++ = (unsigned char)c;
    }
    return(s);
}

int main(void)
{
    char buffer[10];

    ft_memset(buffer, 'E', 5);
    printf("Buffer contents after memset is : %s", buffer);
}

// void *ft_memset( void *b, int c, size_t len)
// {
//     unsigned char *placeholder;
//     placeholder = (unsigned char *)b;

//     while (len > 0)
//     {
//         *placeholder = (unsigned char *)c;
//         placeholder++;
//         len--;
//     }
//     return(b);
// }
// int main()
// {
//     char buffer[10];
//     ft_memset(buffer, 'O', 10);
//     return(0);
// }