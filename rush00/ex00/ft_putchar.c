#include	<unistd.h>

void	ft_putchar(int x, int y, int p_x, int p_y)
{
	if (p_x == 0 && p_y == 0)
		write(1, "A", 1);
	else if ((p_x == 0 && p_y == y - 1) || (p_x == x - 1 && p_y == 0))
		write(1, "C", 1);
	else if (p_x == x - 1 && p_y == y - 1)
		write(1, "A", 1);
	else if ((p_x > 0 && p_x < x - 1) && (p_y > 0 && p_y < y - 1))
		write(1, " ", 1);
	else
		write(1, "B", 1);
}
