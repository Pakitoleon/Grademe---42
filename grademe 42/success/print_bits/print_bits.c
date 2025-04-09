#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int	i;

	for (i = 7;  i >= 0; i--)
	{
		if (octet & (1 << i))
			write (1, "1", 1);
		else
			write (1, "0", 1);
	}
	return (0);
}

