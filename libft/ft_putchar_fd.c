#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main(void)
{
	char			s;
	unsigned int	file_descriptor;

	s = 'Z';
	file_descriptor = STDOUT_FILENO;
	ft_putchar_fd(s, file_descriptor);
	return (0);
}
