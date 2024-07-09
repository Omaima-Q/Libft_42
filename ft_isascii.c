/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:49:29 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/06 15:20:04 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
    if( c >= 0 && c <= 127)
        return(c);
    return(0);
}

#include <stdio.h>
int main(void)
{
    printf("%d", ft_isascii('l'));
    return (0);
}