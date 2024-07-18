#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t ft_strlen(const char *s);
char *ft_strchr(const char *s, int c);
size_t ft_strlcpy(char *dest, const char *src, size_t size);

char *ft_strtrim(char const *s1, char const *set)
{
    size_t front;
    size_t rear;
    char *str;

    str = 0;
    if (s1 != 0 && set != 0)
    {
        front = 0;
        rear = ft_strlen(s1);
        while (s1[front] && ft_strchr(set, s1[front]))
            front++;
        while (s1[rear - 1] && ft_strchr(set, s1[rear - 1]) && rear > front)
            rear--;
        str = (char *)malloc(sizeof(char) * (rear - front + 1));
        if (str)
            ft_strlcpy(str, &s1[front], rear - front + 1);
    }
    return (str);
}

size_t ft_strlen(const char *s)
{
    size_t len = 0;
    while (s[len])
        len++;
    return len;
}

char *ft_strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == c)
            return (char *)s;
        s++;
    }
    if (c == '\0')
        return (char *)s;
    return NULL;
}

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t src_len = ft_strlen(src);
    size_t i;
    for (i = 0; i < size - 1 && i < src_len; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return src_len;
}

int main(void)
{
    const char *s1 = "  \t Omaima Qaroot \t\n ";
    const char *set = " \t\n Oma";

    char *trimmed_str = ft_strtrim(s1, set);

    if (trimmed_str)
    {
        printf("Trimmed string: \"%s\"\n", trimmed_str);
        free(trimmed_str); // Remember to free allocated memory
    }
    else
    {
        printf("Error: Memory allocation failed or input was invalid.\n");
    }

    return 0;
}
