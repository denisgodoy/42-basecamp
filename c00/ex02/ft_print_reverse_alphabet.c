#include	<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabet;

	alphabet = 'z';
	while (alphabet >= 'a')
	{
		write(1, &alphabet, 1);
		alphabet--;
	}
}

#teste
void ft_print_reverse_alphabet();

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
