#include <stdio.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	nbr = 0;
	int	sig = 1;
	int	i = 0;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + (str[i++] - '0');
	return (nbr * sig);
}

