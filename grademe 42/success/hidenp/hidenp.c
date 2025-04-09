#include <unistd.h>
#include <stdio.h>

int	main (int argc, char **argv)
{
	int	i = 0;
	int	b = 0;

	if (argc == 3)
	{
		while (argv[2][b] && argv[1][i])
		{
			if (argv[2][b] == argv[1][i])
				i++;
			b++;
		}
		if (!argv[1][i])
			write (1, "1", 1);
		else
			write (1, "0", 1);
	}
	write (1, "\n", 1);
	return (0);
}

