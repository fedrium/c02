int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str != '\0')
	{
		if (str >= 97 || str <= 122)
			i++;
	}
	if (i != 0)
		return (1);
	else
		return (0);
}