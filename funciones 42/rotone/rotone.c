#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main (int argc, char **argv)
{
	char	*str = argv[1];
	int	i = 0;

	if (argc == 2)
	{
		while (str[i] != '\0')
		{
			if ((str[i] >= 'A' && str[i] <= 'Y') || (str[i] >= 'a' && str[i] <= 'y'))
				ft_putchar (str[i] + 1);
			else if (str[i] == 'Z' || str[i] == 'z')
				ft_putchar (str[i] - 25);
			else 
				ft_putchar (str[i]);
			
			i++;
		}
		
	}
	ft_putchar ('\n');
	return (0);
}

