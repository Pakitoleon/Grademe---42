#include <stdio.h>
#include <unistd.h>

void	ft_swap (int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

