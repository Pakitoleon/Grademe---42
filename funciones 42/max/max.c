#include <stdio.h>
#include <unistd.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	i = 0;

	if(len == 0)
		return (0);
	int	rest = tab[i];
	while (i < len)
	{
		if (rest < tab[i])
			rest = tab[i];
			i++;
	}
	return (rest);
}


