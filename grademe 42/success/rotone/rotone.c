#include <stdio.h>
#include <unistd.h>
void ft_putchar (char c)
{
	write (1, &c, 1);
}

int	main (int argc, char **argv)
{
	int	i = 0;
	char	*str = argv[1];

	if (argc == 2)
	{	
		while (str[i] != '\0')
		{
			if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
				ft_putchar (str[i] + 1);
			else if (str[i] == 'Z' || str[i] == 'z')
				ft_putchar (str[i] - 25);
			else
				ft_putchar (str[i]);
			i++;
		}
		
	}
	write (1, "\n", 1);
}
