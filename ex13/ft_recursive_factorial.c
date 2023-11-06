int	ft_recursive_factorial(int nb)
{
	int     result;

    result = 1;
    if (nb < 0 || nb > 16)
        return (0);
    if (nb > 0)
        result *= nb * ft_recursive_factorial(nb - 1);
    return (result);
}
