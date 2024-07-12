#include <stdio.h>
#include <stdlib.h> // for malloc, free
#include <string.h> // for strcpy

static size_t ft_intlen(int n)
{
    size_t len = 0;
    if (n == 0)
        return 1;
    if (n < 0)
    {
        n = -n;
        len++;
    }
    while (n > 0)
    {
        n /= 10;
        len++;
    }
    return len;
}

char *ft_itoa(int n)
{
    char *ret;
    size_t len;

    if (n == -2147483648)
    {
        // Special case for minimum int value
        ret = (char *)malloc(12); // "-2147483648" + '\0'
        if (ret == NULL)
            return NULL;
        strcpy(ret, "-2147483648");
        return ret;
    }

    len = ft_intlen(n);
    ret = (char *)malloc((len + 1) * sizeof(char)); // +1 for '\0'
    if (ret == NULL)
        return NULL;

    if (n == 0)
    {
        ret[0] = '0';
        ret[1] = '\0';
        return ret;
    }

    if (n < 0)
    {
        ret[0] = '-';
        n = -n;
    }

    ret[len] = '\0'; // Ensure null-termination

    while (len > 0)
    {
        ret[--len] = (n % 10) + '0';
        n /= 10;
    }

    return ret;
}

int main()
{
    int num1 = 12345;
    int num2 = -98765;

    char *str1 = ft_itoa(num1);
    char *str2 = ft_itoa(num2);

    if (str1 && str2)
    {
        printf("Integer: %d, String: %s\n", num1, str1);
        printf("Integer: %d, String: %s\n", num2, str2);

        free(str1);
        free(str2);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
