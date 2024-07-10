/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:49:01 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/06 14:53:41 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_isalnum(int c)
{
    if ((c >= '0' && c <= '9') ||     // Checks if c is a digit ('0' to '9')
        (c >= 'a' && c <= 'z') ||     // Checks if c is a lowercase letter ('a' to 'z')
        (c >= 'A' && c <= 'Z'))       // Checks if c is an uppercase letter ('A' to 'Z')
    {
        return (c);                     // Returns 1 if any of the conditions are true (c is alphanumeric)
    }
    return 0;                         // Returns 0 if none of the conditions are true (c is not alphanumeric)
}


int main(void)
{
    // ft_isalnum('H');
    printf("The result is %d", ft_isalnum('H'));
    return (0);
}