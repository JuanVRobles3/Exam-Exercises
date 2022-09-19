#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repiteesto(char c, unsigned int times)
{
	while (times--)
		ft_putchar(c);
}


void	repeat_alpha(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] <= 'z' && s[i] >= 'a')
		{
			repiteesto(s[i], s[i] - 'a' + 1);
		}   
		else if(s[i] >= 'A' && s[i] <= 'Z')
		{
			repiteesto(s[i], s[i] - 'A' + 1);
		}
		else
			ft_putchar(s[i]);
		i++;
	}
}


int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	ft_putchar('\n');
	return (0);
}
