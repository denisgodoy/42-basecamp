void	ft_rev_int_tab(int	*tab, int	size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	j = (size - 1);
	while (i < j)
	{
		swap = tab[i];
		tab[i] = tab[j];
		tab[j] = swap;
		i++;
		j--;
	}
}
