/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 21:34:16 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/06 15:21:42 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void *ft_memcpy(void *dst, void const *src, size_t len)
{
    unsigned char	*altdst;
	unsigned char	*altsrc;

	altdst = (unsigned char *)dst;
	altsrc = (unsigned char *)src;
	while (len > 0)
	{
		*altdst = *altsrc;
		altdst++;
		altsrc++;
		len--;
	}
	return (dst);
}

int main(void) 
{
    char src[] = "Hello, World!";
    char dst[20];  // Destination buffer
    
    ft_memcpy(dst, src, sizeof(src));  
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst);
    
    return 0;
}