#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	if (s == NULL || fd < 0)
		return ;
	i = 0;
	while (s[i])
	{
		i++;
	}
	write(fd, s, i);
	write(fd, "\n", 1);
}

int	main(void)
{
	int file_descriptor = STDOUT_FILENO;
	// Test Case 1: Normal string
	char *message1 = "Hello, World!";
	ft_putendl_fd(message1, file_descriptor);
}
