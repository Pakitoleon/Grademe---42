#include <stdio.h>
#include <unistd.h>

int	main (int argc, char **str)
{
	int	i = 0;

	if (argc == 2)
	{
		while (str[1][i] != '\0')
			i++;
		while (i >= 1)
		{
			write (1, &str[1][i - 1], 1);
			i--;
		}
	}
	write (1, "\n", 1);
}
