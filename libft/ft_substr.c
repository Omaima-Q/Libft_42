#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_substr(const char *s, unsigned int start, size_t len) 
{
    // Check if s is NULL
    if (s == NULL) {
        return NULL;
    }
    
    // Get the length of the string s
    size_t s_len = strlen(s);
    
    // Adjust len if start is beyond the end of the string
    if (start >= s_len) {
        len = 0;
    } else if (start + len > s_len) {
        len = s_len - start;
    }
    
    // Allocate memory for the substring (+1 for the null terminator)
    char *substr = (char *)malloc((len + 1) * sizeof(char));
    if (substr == NULL) {
        return NULL; // malloc failed
    }
    
    // Copy the substring from s to substr
    strncpy(substr, s + start, len);
    substr[len] = '\0'; // Ensure the substring is null-terminated
    
    return substr;
}

// int main(void)
// {
//     const char *original_s = "Hello, World!";
//     unsigned int sub_s = 5; 
//     size_t l_s = 6; 
    
//     if (sub_s == NULL) 
//     {
//         printf("Error: Unable to extract substring.\n");
//         return (1); // Return an error code
//     }
//     // printf(" Original string is %s", original_s);
//     char *result = ft_strsub(original_s, sub_s, l_s );
//     printf(" substring extracted from string is %s", result);
    
//     // free (sub_s);
//     return (0);
// }

int main(void) 
{
    const char *s = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    // Call ft_substr to extract the substring
    char *substr = ft_substr(s, start, len);

    // Check if ft_substr returned NULL (indicating an error)
    if (substr == NULL) {
        printf("Error: Unable to extract substring.\n");
        return 1; // Return an error code
    }

    // Print the extracted substring
    printf("Substring: %s\n", substr);

    // Free the dynamically allocated memory
    free(substr);

    return 0;
}
