#include	<unistd.h>

void	ft_is_negative(int	n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

#teste
int	main(void)
{
	int i;
	
	i = -2;
	while (i <= 2)
	{
		ft_is_negative(i);
		i++;
	}
	printf("\n");
	return (0);
}
