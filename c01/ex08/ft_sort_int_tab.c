void	ft_sort_int_tab(int	*tab, int	size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
		j = 0;
	}
}
