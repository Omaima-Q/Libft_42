/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:49:44 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/06 15:21:16 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_isprint(int s)
{
    if(s >= 32 && s <= 126)
        return(s);
    return(0);
}
int main(void)
{
    printf("The result is : %d", ft_isprint('D'));
    return (0);
}