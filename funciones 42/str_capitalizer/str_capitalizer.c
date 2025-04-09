#include <unistd.h>
#include <stdio.h>

void	str_capitalizer(char *argv)
{
	int	i = 0;

	while (argv[i])
	{
		if (argv[i] >= 'A' && argv[i] <= 'Z')
			argv[i] += 32;
		if ((argv[i] >= 'a' && argv[i] <= 'z') && (argv[i - 1] == ' '|| argv[i - 1] == '\t' || argv[i - 1] == '\0'))
			argv[i] -= 32;
		write (1, &argv[i++], 1);
	}
}

int	main (int argc, char ** argv)
{
	if (argc == 1)
		write (1, "\n", 1);
	else
	{
		int	i = 1;
	
		while (i < argc)
		{
			str_capitalizer (argv[i]);
			write (1, "\n", 1);
			i += 1;
		}
	}
	return (0);
}

