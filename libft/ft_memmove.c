/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:39:58 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/07 15:05:26 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void    *ft_memmove(void *dst, void const *src, size_t len)
{
    char	*tmp;

	tmp = (char *)malloc(sizeof(char) * len);
	if (tmp == NULL)
		return (NULL);
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst);
}

int main(void)
{
    char source[] = "Hello";
	char destination[10];  // Make sure destination has enough space

	ft_memmove(destination, source, 5);

	printf("Source: %s\n", source);  // Source remains unchanged
	printf("Destination: %s\n", destination);  // Destination now contains "Hello"

}
