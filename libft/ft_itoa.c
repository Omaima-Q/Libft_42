#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	count_size(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*dst;
	int			count;
	int			i;
	long int	num;

	num = n;
	count = count_size(num);
	i = 0;
	if (num < 0 || count == 0)
		count++;
	if (!(dst = (char *)malloc((count + 1) * sizeof(char))))
		return (NULL);
	if (num < 0)
	{
		num *= -1;
		dst[0] = '-';
		i++;
	}
	while (count > i)
	{
		count--;
		dst[count] = (num % 10) + '0';
		num /= 10;
	}
	return (dst);
}

int	main(void)
{
	printf("%s\n", ft_itoa(-123));
	return (0);
}
