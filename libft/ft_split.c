#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to count words in a string separated by character c
static size_t ft_countword(char const *s, char c)
{
    size_t count = 0;

    if (!s)
        return 0;

    while (*s)
    {
        while (*s == c)
            s++;

        if (*s)
            count++;

        while (*s && *s != c)
            s++;
    }
    return count;
}
// Function to create an array of strings split by character c
char **ft_split(char const *s, char c)
{
    char **lst;
    size_t word_len;
    int i = 0;
    size_t num_words;

    num_words = ft_countword(s, c);
    lst = (char **)malloc((num_words + 1) * sizeof(char *));
    if (!s || !lst)
        return NULL;

    while (*s)
    {
        while (*s == c && *s)
            s++;

        if (*s)
        {
            const char *start = s;

            while (*s && *s != c)
                s++;

            word_len = s - start;
            lst[i] = (char *)malloc((word_len + 1) * sizeof(char));
            strncpy(lst[i], start, word_len);
            lst[i][word_len] = '\0';
            i++;
        }
    }
    lst[i] = NULL;
    return lst;
}

int main(void)
{
    const char *str = "Hello, world! This is a test string.";
    char separator = ' ';

    // Split the string
    char **words = ft_split(str, separator);

    if (words)
    {
        // Print each word directly
        int i = 0;
        while (words[i] != NULL)
        {
            printf("%s\n", words[i]);
            free(words[i]); // Free each allocated word
            i++;
        }
        printf("NULL\n"); // Print NULL terminator explicitly
        free(words); // Free the array of pointers
    }
    else
    {
        printf("Memory allocation failed.\n");
    }
    return 0;
}
