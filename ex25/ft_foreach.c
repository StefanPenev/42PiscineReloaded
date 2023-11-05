void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	if (tab)
		while (i++ < lenght)
			f(tab[i]);
}
