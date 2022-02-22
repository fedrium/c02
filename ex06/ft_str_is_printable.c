int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str != '\0')
	{
		if (str >= 1 || str <= 127)
			i++;
	}
	if (i > 0)
		return (1);
	else
		return (0);
}