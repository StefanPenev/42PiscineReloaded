void	ft_putchar(char c);

void	ft_printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_printstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
