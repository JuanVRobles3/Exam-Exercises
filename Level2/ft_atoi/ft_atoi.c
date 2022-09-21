int	ft_atoi(const char *str)
{
	int i;
	int sig;
	int result;

	i = 0;
	sig = 1;
	result = 0;
	if (str[i] >= 9 && str[i] <= 13)
	   i++;
	if(str[i] == '-')
		sig = -1;
	if(str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sig * result);		
}
