/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqaroot <oqaroot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:39:58 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/22 17:19:59 by oqaroot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	unsigned char	*altdst;
	unsigned char	*altsrc;

	altdst = dst;
	altsrc = (unsigned char *)src;
	if (dst < src)
	{
		return (ft_memcpy(dst, src, len));
	}
	if (dst > src)
	{
		while (len--)
			altdst[len] = altsrc[len];
	}
	return (dst);
}
