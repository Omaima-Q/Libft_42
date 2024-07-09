/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:49:15 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/06 15:18:16 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_isalpha( int a)
{
    if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    return(a);
    else
    return(0);
}

int main(void)
{
    printf("The result is : %d", ft_isalpha('D'));
    return (0);
}
