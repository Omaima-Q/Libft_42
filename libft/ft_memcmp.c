/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:39:59 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/08 18:20:52 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i;
 
    /* converting s1 and s2 to unsigned char */   
    str1 = (unsigned char *) s1;
    str2 = (unsigned char *) s2;
    i = 0;
    /* same loop as strcmp */
    while (i < n)
    {
       /* check if current byte is different in both strings */
        if ((unsigned char) str1[i] != (unsigned char) str2[i])
            /* return the difference between both chars */
            return ((unsigned char) str1[i] - (unsigned char) str2[i]);
        
        i++; // Increment i to move to the next byte
    }
    /* if we read through both strings completely and there
     * were no difference, we return 0
     */
    return 0;
}


int main(void)
{
    const char *str4 = "Hello";
    const char *str5 = "Hello";
    const char *str6 = "Helicopter";
    size_t len1 = 5;  // Length of str1 and str2
    size_t len2 = 10; // Length of str3

    int result1 = ft_memcmp(str4, str5, len1);
    int result2 = ft_memcmp(str4, str6, len2);

    if (result1 == 0)
    {
        printf("'%s' is equal to '%s' within the first %zu characters.\n", str4, str5, len1);
    }
    else
    {
        printf("'%s' is not equal to '%s' within the first %zu characters.\n", str4, str5, len1);
    }

    if (result2 == 0)
    {
        printf("'%s' is equal to '%s' within the first %zu characters.\n", str4, str6, len2);
    }
    else
    {
        printf("'%s' is not equal to '%s' within the first %zu characters.\n", str4, str6, len2);
    }

    return 0;
}
