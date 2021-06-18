void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	v_a;
	int	v_b;

	v_a = *a;
	v_b = *b;
	if (v_b != 0)
	{
		*a = (v_a / v_b);
		*b = (v_a % v_b);
	}
}
