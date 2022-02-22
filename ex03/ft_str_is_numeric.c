int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str != '\0')
	{
		if (str >= 48 || str <= 57)
			i++;
	}
	if (i != 0)
		return (1);
	else
		return (0);
}