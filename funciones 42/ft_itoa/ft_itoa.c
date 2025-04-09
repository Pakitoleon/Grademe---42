#include<unistd.h>
#include<limits.h>
#include<stdio.h>
#include<stdlib.h>

int	nlen (int nbr)
{
	int	i = 0;
	if (nbr <= 0)
		++i;
	while(nbr != 0)
	{
		++i;
		nbr = nbr / 10;
	}
	return (i);
}

int	ft_abs (int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

char	ft_itoa ( int nbr)
{
	char	*num;
	int	len;

	len = nlen(nbr);
	num = malloc(sizeof(char) * (len + 1));
	if (!num)
		return (NULL);
	num[len] = '\0';

	if (nbr ==0)
		num[0] = '0';
	else if (nbr < 0)
		num[0] = '-';

	while (nbr != 0)
	{
		num[--len] = ft_abs(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (num);
}
