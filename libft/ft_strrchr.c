/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqaroot <oqaroot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:06:09 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/22 16:28:10 by oqaroot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_pos = NULL;

	while (*s)
	{
		if (*s == (char)c)
			last_pos = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last_pos);
}
