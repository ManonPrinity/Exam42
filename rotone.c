#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_rotone(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
		{
			str[i] += 1;
		}
		else if (str[i] == 'z')
			str[i] = 'a';
		else if (str[i] == 'Z')
			str[i] = 'A';
		ft_putchar(str[i]);
		i++;
	}
	return (str[i]);
}

int		main(int ac, char **av) 
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			ft_rotone(av[1]);
			i++;
		}
		ft_putchar('\n');
	}
}