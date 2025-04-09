#include <unistd.h>
#include <stdio.h>

int	space (int i, char *str)
{
	while (str[i] == ' ' || str[i] == '\t')
		++i;
	return (i);
}

char	word_len (char *str)
{
	int	i = 0;

	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		++i;
	return (i);
}

int	print_word( int i, char *str, int *first)
{
	int	len;
	i = space(i, str);
	len = word_len (str + i);

	if (*first != 0)
		write (1, " ", 1);
	*first = 1;
	write (1, str + i, len);
	return (i + len);
}

void	put_str (int *first, char *str)
{
	int	i  = 0;

	i = space (i, str);
	while (str[i] != '\0')
	{	
		i = print_word (i,  str, first);
		i = space (i, str);
	}
}

int	main (int argc, char *argv[])
{
	char *str = argv[1];
        int i = 0;
        int first = 0;

        i = space(i, str);
        i = i + word_len(str + i);
        put_str(&first, str + i);
        print_word(0, str, &first);
	
}

