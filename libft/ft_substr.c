/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqaroot <oqaroot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:26:01 by oqaroot           #+#    #+#             */
/*   Updated: 2024/07/26 17:30:40 by oqaroot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strncpy(char *dst, const char *src, size_t len)
{
	while (len--)
		dst[len] = src[len];
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*substr;

	if (s == NULL)
	{
		return (NULL);
	}
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		len = 0;
	}
	else if (start + len > s_len)
	{
		len = s_len - start;
	}
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
	{
		return (NULL);
	}
	ft_strncpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}
