#include<libft.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*i;

	i = str;
	while (n > 0)
	{
		*i = c;
		i++;
		n--;
	}
	return (str);
}
