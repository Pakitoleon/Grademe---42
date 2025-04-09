#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main (int argc, char **argv)
{
	int	s1 = 0;
	int	s2 = 0;
	int	res = 0;

	if (argc == 4)
	{
		s1 = atoi (argv[1]);
		s2 = atoi (argv[3]);
		if (argv[2][0] == '+')
			res = s1 + s2;
		else if (argv[2][0] == '-')
			res = s1 - s2;
		else if (argv[2][0] == '*')
			res = s1 * s2;
		else if (argv[2][0] == '/')
			res = s1 / s2;
		else if (argv[2][0] == '%')
			res = s1 % s2;
		printf ("%d\n", res);
	}	
	else
		write(1, "\n", 1);
}

