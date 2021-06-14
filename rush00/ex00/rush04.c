#include    <unistd.h>

void	ft_putchar(int x, int y, int p_x, int p_y);

void	rush(int x, int y)
{
	int	p_x;
	int	p_y;

	if(x <= 0 || y <= 0)
	{
		write(1, "Insira um número positivo.\n", 28);
	}
	else
	{
		p_y = 0;
		while (p_y < y)
		{
			p_x = 0;
			while (p_x < x)
			{
				ft_putchar(x, y, p_x, p_y);
				p_x++;
			}
			write(1, "\n", 2);
			p_y++;
		}
	}
}
