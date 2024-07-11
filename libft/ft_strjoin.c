#include "libft.h"
#include <stdio.h>
#include <stdlib.h> // For malloc, free
#include <string.h> // For strlen

// Assuming ft_strlen function is defined somewhere else
size_t ft_strlen(const char *str) 
{
    size_t len = 0;
    while (str[len] != '\0') 
    {
        len++;
    }
    return len;
}

char *ft_strjoin(const char *s1, const char *s2) 
{
    char *str;
    int i = 0, j = 0;

    if (s1 != NULL && s2 != NULL && (str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)) != NULL) 
    {
        while (s1[i] != '\0') 
        {
            str[i] = s1[i];
            i++;
        }

        while (s2[j] != '\0') 
        {
            str[i + j] = s2[j];
            j++;
        }

        str[i + j] = '\0';
        return (str);
    }
    return (NULL);
}

int main(void) 
{
    const char *str1 = "Omaima";
    const char *str2 = " Waleed";
    
    // Call ft_strjoin to concatenate str1 and str2
    char *result = ft_strjoin(str1, str2);
    
    if (result != NULL) {
        printf("Concatenated string: %s\n", result);
        free(result); // Free allocated memory
    } else {
        printf("Memory allocation failed or input strings were NULL.\n");
    }
    return (0);
}
