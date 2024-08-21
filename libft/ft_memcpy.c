/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqaroot <oqaroot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 21:34:16 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/22 17:00:57 by oqaroot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*altdst;
	unsigned char	*altsrc;
	size_t			i;

	altdst = (unsigned char *)dst;
	altsrc = (unsigned char *)src;
	if (!altdst && !altsrc)
		return (0);
	i = 0;
	while (i < n)
	{
		altdst[i] = altsrc[i];
		i++;
	}
	return (dst);
}
