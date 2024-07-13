#include "libft.h"
#include <unistd.h> // for write

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11); // directly output the string "-2147483648"
        return;
    }

    if (n < 0)
    {
        write(fd, "-", 1); // output the negative sign
        n = -n; // make n positive for further processing
    }

    if (n / 10 != 0)
        ft_putnbr_fd(n / 10, fd); // recursively output remaining digits

    char digit = '0' + (n % 10); // convert digit to character
    write(fd, &digit, 1); // output the digit character
}

int main()
{
    int num = -12345;
    ft_putnbr_fd(num, 1); // Output -12345 to stdout (fd = 1)
    return 0;
}
