int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str != '\0')
	{
		if (str >= 65 || str <= 90)
			i++;
	}
	if (i > 0)
		return (1);
	else
		return (0);
}