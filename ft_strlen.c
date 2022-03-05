#include<libft.h>
int ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	retutn (i);
}

int main()
{
	char *str;
	str = "hello";
	printf("%d", ft_strlen(str));
}
