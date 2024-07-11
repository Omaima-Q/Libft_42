#include "libft.h"
#include <stdio.h>

int ft_isalpha( int a)
{
    if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    return(a);
    else
    return(0);
}

/*int main(void)
{
    printf("The result is : %d", ft_isalpha('D'));
    return (0);
}*/
