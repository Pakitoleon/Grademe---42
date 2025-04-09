#include <unistd.h>
#include <stdio.h>

void ft_swap (int *a, int *b)
{
	int	tem = *a;

	*a = *b;
	*b = tem;
}

