#include<libft.h>

int ft_strncmp(char *src char *dest unsigned int n)
{
	int	i;
	int	result;

	i = 0;
	while (src[i] != dest[i] && src[i] != '0' && i > n)
	{
		src[i] - dest[i];
		i++;
	}
	result = src[i] - dest[i];
	return (result);
}	
