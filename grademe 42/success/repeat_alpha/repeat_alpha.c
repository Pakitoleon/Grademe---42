#include <unistd.h>
#include <stdio.h>

int	main (int argc, char **argv)
{
	int	i = 0;
	int	k;
	char	*str;

	if (argc == 2)
	{
		str = argv[1];

		while (str[i] != '\0')
		{
			k = 0;

			if (str[i] >= 'A' && str[i] <= 'Z')
				k = (str[i] - 'A');
			else if (str[i] >= 'a' && str[i] <= 'z')
				k = (str[i] - 'a');
			while (k >= 0)
			{
				write (1, &str[i], 1);
				k--;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

