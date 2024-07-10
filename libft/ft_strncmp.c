/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:36:18 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/08 17:36:48 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;
    
    while ((s1[i] || s2[i]) && i < n)
    {
        if ((unsigned char) s1[i] != (unsigned char) s2[i])
        { 
            return ((unsigned char) s1[i] - (unsigned char) s2[i]);
        } 
        i++;
    }
    return (0);
}

int main(void)
{
    const char *str1 = "Hello";
    const char *str2 = "Helicopter";
    size_t len = 5;

    int result = ft_strncmp(str1, str2, len);
    
    if (result < 0) 
    {
        printf("'%s' is less than '%s' within the first %zu characters.\n", str1, str2, len);
    } 
    else if (result > 0) {
        printf("'%s' is greater than '%s' within the first %zu characters.\n", str1, str2, len);
    } 
    else 
    {
        printf("'%s' is equal to '%s' within the first %zu characters.\n", str1, str2, len);
    }
    return 0;
}
