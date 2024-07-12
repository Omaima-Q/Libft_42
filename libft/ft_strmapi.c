#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
    size_t len = 0;
    while (s[len] != '\0')
        len++;
    return len;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int len = ft_strlen(s);
    char *str = (char *)malloc(len + 1);
    if (!str)
        return NULL;

    char *ptr = str;
    while (*s != '\0')
    {
        *ptr = f(ptr - str, *s); // Using pointer arithmetic to calculate index
        ptr++;
        s++;
    }
    *ptr = '\0';

    return str;
}

char transform(unsigned int index, char c)
{
    if (c >= 'a' && c <= 'z')
        return c - ('a' - 'A');
    else
        return c;
}

int main()
{
    char *input = "Hello, World!";

    char *result = ft_strmapi(input, &transform);

    if (result)
    {
        printf("Transformed string: %s\n", result);
        free(result);
    }
    else
    {
        printf("Memory allocation failed or invalid input.\n");
    }

    return 0;
}
