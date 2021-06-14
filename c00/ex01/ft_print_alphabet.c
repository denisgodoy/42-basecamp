#include	<unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet;

	alphabet = 97;
	while (alphabet <= 122)
	{
		write(1, &alphabet, 1);
		alphabet++;
	}
}

#teste
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
