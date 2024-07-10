/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:39:30 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2024/07/08 16:13:17 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    
    i = 0;
    j = 0;
    /* checking if needle is empty */
    if (needle[0] == 0)
        return ((char *) haystack);
    /* loop over haystack while we haven't looped over the whole
     * thing or until i = len
     */
    while (haystack[i] && i < len)
    {
        /* inside this first while loop
         * we are looping over the haystack as long as 
         * the current character is the correct character
         * in the needle
         */
        while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
        {
            /* we are inside this loop while the current
             * haystack character is the correct character in the 
             * needle so we just increment j to offset our haystack
             */
            j++;
            /* if needle[j] == 0, this means we read the whole
             * needle, so we found it in the haystack
             * we can return a pointer to the first character of
             * the needle
             * that why we used 2 counters, now we can offset our 
             * haystack pointer by i, which is the position of the
             * first character of the needle
             */
            if (needle[j] == 0)
                return ((char *) haystack + i);
        }
        i++;
        /* don't forget to set j to 0 again, otherwise you will
         * be offsetted in the needle beginning from the second
         * haystack character
         */
        j = 0;
    }
    return (0);
}

int main(void) 
{
    const char haystack[] = "This is a sample string.";
    const char needle[] = "sample";
    size_t len = 10;  // Search only within the first 10 characters of haystack

    char *result = ft_strnstr(haystack, needle, len);
    if (result != NULL) {
        printf("'%s' found in haystack: '%s'\n", needle, result);
    } else {
        printf("'%s' not found in haystack within the first %zu characters.\n", needle, len);
    }

    return 0;
}