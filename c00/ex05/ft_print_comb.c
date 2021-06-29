#include	<unistd.h>

void	ft_putchar(char	a, char	b, char	c);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	while (a <= 55)
	{
		b = a;
		while (b <= 56)
		{
			c = b;
			while (c <= 57)
			{
				if (a < b && b < c)
				{
					ft_putchar(a, b, c);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_putchar(char	a, char	b, char	c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == 55 && b == 56 && c == 57))
		write(1, ", ", 2);
}
