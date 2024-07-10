/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:48:32 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/06 14:56:10 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int ft_atoi(char *str)
{
    int i;
    int sign;
    int nbr;

    i = 0;       // Initialize index i to 0
    sign = 1;    // Initialize sign to positive
    nbr = 0;     // Initialize nbr (resulting integer) to 0

    // Skip whitespace characters (ASCII 32 and ASCII 9 to 13)
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }

    // Handle sign (+/-)
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = sign * -1;  // If '-', change sign to negative
        i++;
    }

    // Convert numeric characters to integer
    while (str[i] >= '0' && str[i] <= '9')
    {
        nbr = (nbr * 10) + (str[i] - '0');  // Convert character to integer
        i++;
    }

    return (nbr * sign);  // Return the integer value with sign applied
}


int	main(void)
{
	printf("%d\n", ft_atoi("   ---+--+1234ab567"));
	printf("%d\n", ft_atoi(""));
}